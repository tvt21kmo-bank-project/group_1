var express = require('express');
var router = express.Router();
var dbConn  = require('../lib/db');


// Näytä tilin sivu
router.get('/', function(req,res,next) {
    dbConn.query('SELECT * FROM Tili ',function(err,rows) {
        console.log(rows)
        if(err){
            req.flash('error',err);
            res.render('Tili',{data:''});
        } else {
            res.render('Tili',{data:rows});
        }
    });
});

// Näytä Tilin lisäys sivu
router.get('/add', function(req,res,next){
    res.render('Tili/add',{
        
        idtili: '',
        Tilinumero: '',
        Debit: '',
        Credit:'',
        Tyyppi:'',
    })
})

router.post('/add', function(req,res,next){
    
    let idtili = req.body.idtili;
    let Tilinumero = req.body.Tilinumero;
    let Debit = req.body.Debit;
    let Credit = req.body.Credit;
    let errors = false;

    if(idtili.length === 0 || Tilinumero.length === 0) {
        errors = true;
        req.flash('Error!', "Please try again");
        res.render('Tili/add', {
            
            idtili:'',
            Tilinumero:'',
            Debit:'',
            Credit:'',
            Tyyppi:''
        })
    }

    // Jos ei löydy virheitä:
    if(!errors){
        var form_data = {
            
            idtili: idtili,
            Tilinumero: Tilinumero,
            Debit: Debit,
            Credit: Credit,
        }

        dbConn.query('INSERT INTO Tili SET ?', form_data,function(err,result){
            if(err){
                req.flash('error',err)

                res.render('Tili/add', {
                    
                    idtili: form_data.idtili,
                    Tilinumero: form_data.Tilinumero,
                    Debit: form_data.Debit,
                    Credit: form_data.Credit,
                    Tyyppi: form_data.Tyyppi
                })
            } else {
                req.flash('success', 'Account successfully added');
                res.redirect('/Account');
            }
        })
    }
})

// Muokkaus sivun näyttäminen
router.get('/edit/(:idTili)',function(req,res,next){

    let idTili = req.params.idTili;

    dbConn.query('SELECT * FROM Tili WHERE idTili = ' + idTili, function(err,rows,fields){
        if(err) throw err

        // jos Tilita ei löydy
        if(rows.length <= 0){
            req.flash('error', 'No customer found with id = ' + idTili)
            res.redirect('/Account')
        }
        else{
            res.render('Tili/edit', {
                title: 'Edit Customer',
                idTili: rows[0].idTili,
                Tilinumero: rows[0].Tilinumero,
                Debit: rows[0].Debit,
                Credit: rows[0].Credit,
                Tyyppi: rows[0].Tyyppi
            })
        }
    })
})

// Päivitä tilin tietoja
router.post('/edit/:idTili',function(req,res,next){
    let idTili = req.body.idTili;
    let Tilinumero = req.body.Tilinumero;
    let Debit = req.body.Debit;
    let Credit = req.body.Credit;
    let Tyyppi = req.body.Tyyppi;
    let errors = false;

    if(idtili.length === 0 || Tilinumero.length === 0){
        errors = true;

        req.flash('error', "Please enter something");
        res.render('Account/edit', {
           idTili: idTili,
            Tilinumero: Tilinumero,
            Debit: Debit,
            Credit,
            Tyyppi
        })
    }
    // Jos ei erroreita
    if(!errors){
        var form_data = {
            idTili: idTili,
            Tilinumero: Tilinumero,
            Debit: Debit,
            Credit: Credit,
            Tyyppi: Tyyppi
        } // päivittää tietokantaan
        dbConn.query('UPDATE Tili SET ? WHERE idTili = ' + idTili, form_data,function(err, result){
            if(err){
                req.flash('error', err)
                res.render('Account/edit',{
                    idTili: form_data.idTili,
                    Tilinumero: form_data.Tilinumero,
                    Debit: form_data.Debit,
                    Credit: form_data.Credit,
                    Tyyppi: form_data.Tyyppi
                })
            } else {
                req.flash('success', 'Customer successfully updated');
                res.redirect('/Account');
            }
        })

}
})
//Poista Tili
router.get('/delete/(:idTili)', function(req,res,next){
    let idTili = req.params.idTili;
    dbConn.query('DELETE FROM Tili WHERE idTili = ' + idTili,function(err, result){
        if (err){
            req.flash('error',err)
            res.redirect('/Account')
        } else {
            req.flash('success', 'Customer successfully deleted! ID = ' + idTili)
            res.redirect('/Account')
        }
    })
})
module.exports = router;