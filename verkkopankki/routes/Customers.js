var express = require('express');
var router = express.Router();
var dbConn  = require('../lib/db');


// Näytä asiakas sivu
router.get('/', function(req,res,next) {
    dbConn.query('SELECT * FROM Asiakas ORDER BY idAsiakas desc',function(err,rows) {
        console.log(rows)
        if(err){
            req.flash('error',err);
            res.render('Asiakkaat',{data:''});
        } else {
            res.render('Asiakkaat',{data:rows});
        }
    });
});

// Näytä asiakkaan lisäys sivu
router.get('/add', function(req,res,next){
    res.render('Asiakkaat/add',{
        
        Etunimi: '',
        Sukunimi: '',
        Hetu: '',
        Osoite:'',
        Puhelin:'',
    })
})

router.post('/add', function(req,res,next){
    
    let Etunimi = req.body.Etunimi;
    let Sukunimi = req.body.Sukunimi;
    let Hetu = req.body.Hetu;
    let Osoite = req.body.Osoite;
    let Puhelin = req.body.Puhelin;
    let errors = false;

    if(Etunimi.length === 0 || Sukunimi.length === 0) {
        errors = true;
        req.flash('Error!', "Please try again");
        res.render('Asiakkaat/add', {
            
            Etunimi:'',
            Sukunimi:'',
            Hetu:'',
            Osoite:'',
            Puhelin:''
        })
    }

    // Jos ei löydy virheitä:
    if(!errors){
        var form_data = {
            
            Etunimi: Etunimi,
            Sukunimi: Sukunimi,
            Hetu: Hetu,
            Osoite: Osoite,
            Puhelin: Puhelin
        }

        dbConn.query('INSERT INTO asiakas SET ?', form_data,function(err,result){
            if(err){
                req.flash('error',err)

                res.render('Asiakkaat/add', {
                    
                    Etunimi: form_data.Etunimi,
                    Sukunimi: form_data.Sukunimi,
                    Hetu: form_data.Hetu,
                    Osoite: form_data.Osoite,
                    Puhelin: form_data.Puhelin
                })
            } else {
                req.flash('success', 'Customer successfully added');
                res.redirect('/Customers');
            }
        })
    }
})

// Muokkaus sivun näyttäminen
router.get('/edit/(:idAsiakas)',function(req,res,next){

    let idAsiakas = req.params.idAsiakas;

    dbConn.query('SELECT * FROM asiakas WHERE idAsiakas = ' + idAsiakas, function(err,rows,fields){
        if(err) throw err

        // jos asiakasta ei löydy
        if(rows.length <= 0){
            req.flash('error', 'No customer found with id = ' + idAsiakas)
            res.redirect('/Customers')
        }
        else{
            res.render('asiakkaat/edit', {
                title: 'Edit Customer',
                idAsiakas: rows[0].idAsiakas,
                Etunimi: rows[0].Etunimi,
                Sukunimi: rows[0].Sukunimi,
                Hetu: rows[0].Hetu,
                Osoite: rows[0].Osoite,
                Puhelin: rows[0].Puhelin
            })
        }
    })
})

// Päivitä asiakkaan tietoja
router.post('/edit/:idAsiakas',function(req,res,next){
    let idAsiakas = req.body.idAsiakas;
    let Etunimi = req.body.Etunimi;
    let Sukunimi = req.body.Sukunimi;
    let Hetu = req.body.Hetu;
    let Osoite = req.body.Osoite;
    let Puhelin = req.body.Puhelin;
    let errors = false;

    if(Etunimi.length === 0 || Sukunimi.length === 0){
        errors = true;

        req.flash('error', "Please enter something");
        res.render('Customers/edit', {
           idAsiakas: idAsiakas,
            Etunimi: Etunimi,
            Sukunimi: Sukunimi,
            Hetu: Hetu,
            Osoite,
            Puhelin
        })
    }
    // Jos ei erroreita
    if(!errors){
        var form_data = {
            idAsiakas: idAsiakas,
            Etunimi: Etunimi,
            Sukunimi: Sukunimi,
            Hetu: Hetu,
            Osoite: Osoite,
            Puhelin: Puhelin
        } // päivittää tietokantaan
        dbConn.query('UPDATE Asiakas SET ? WHERE idAsiakas = ' + idAsiakas, form_data,function(err, result){
            if(err){
                req.flash('error', err)
                res.render('Customers/edit',{
                    idAsiakas: form_data.idAsiakas,
                    Etunimi: form_data.Etunimi,
                    Sukunimi: form_data.Sukunimi,
                    Hetu: form_data.Hetu,
                    Osoite: form_data.Osoite,
                    Puhelin: form_data.Puhelin
                })
            } else {
                req.flash('success', 'Customer successfully updated');
                res.redirect('/Customers');
            }
        })

}
})
//Poista asiakas
router.get('/delete/(:idAsiakas)', function(req,res,next){
    let idAsiakas = req.params.idAsiakas;
    dbConn.query('DELETE FROM Asiakas WHERE idAsiakas = ' + idAsiakas,function(err, result){
        if (err){
            req.flash('error',err)
            res.redirect('/Customers')
        } else {
            req.flash('success', 'Customer successfully deleted! ID = ' + idAsiakas)
            res.redirect('/Customers')
        }
    })
})
module.exports = router;