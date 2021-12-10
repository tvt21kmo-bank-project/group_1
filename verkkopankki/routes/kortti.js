var express = require('express');
var router = express.Router();
var dbConn  = require('../lib/db');


// Näytä kortti sivu
router.get('/', function(req,res,next) {
    dbConn.query('SELECT * FROM kortti',function(err,rows) {
        console.log(rows)
        if(err){
            req.flash('error',err);
            res.render('kortti',{data:''});
        } else {
            res.render('kortti',{data:rows});
        }
    });
});

// Näytä lisäys sivu
router.get('/add', function(req,res,next){
    res.render('kortti/add',{
        
        asiakas_idAsiakas: '',
        tili_idTili: '',
        PIN: '',
        Korttinumero:'',
    })
})

router.post('/add', function(req,res,next){
    
    let asiakas_idAsiakas = req.body.asiakas_idAsiakas;
    let tili_idTili = req.body.tili_idTili;
    let PIN = req.body.PIN;
    let Korttinumero = req.body.Korttinumero;
    let errors = false;

    if(asiakas_idAsiakas.length === 0 || tili_idTili.length === 0) {
        errors = true;
        req.flash('Error!', "Please try again");
        res.render('kortti/add', {
            
            asiakas_idAsiakas:'',
            tili_idTili:'',
            PIN:'',
            Korttinumero:''
        })
    }

    // Jos ei löydy virheitä:
    if(!errors){
        var form_data = {
            
            asiakas_idAsiakas: asiakas_idAsiakas,
            tili_idTili: tili_idTili,
            PIN: PIN,
            Korttinumero: Korttinumero
        }

        dbConn.query('INSERT INTO kortti SET ?', form_data,function(err,result){
            if(err){
                req.flash('error',err)

                res.render('kortti/add', {
                    
                    asiakas_idAsiakas: form_data.asiakas_idAsiakas,
                    tili_idTili: form_data.tili_idTili,
                    PIN: form_data.PIN,
                    Korttinumero: form_data.Korttinumero
                })
            } else {
                req.flash('success', 'Card successfully added');
                res.redirect('/kortti');
            }
        })
    }
})

// Muokkaus sivun näyttäminen
router.get('/edit/(:asiakas_idAsiakas)',function(req,res,next){

    let asiakas_idAsiakas = req.params.asiakas_idAsiakas;

    dbConn.query('SELECT * FROM kortti WHERE asiakas_idAsiakas = ' + asiakas_idAsiakas, function(err,rows,fields){
        if(err) throw err

        // jos korttia ei löydy
        if(rows.length <= 0){
            req.flash('error', 'No kortti found with id = ' + asiakas_idAsiakas)
            res.redirect('/kortti')
        }
        else{
            res.render('kortti/edit', {
                title: 'Edit Card',
                asiakas_idAsiakas: rows[0].asiakas_idAsiakas,
                tili_idTili: rows[0].tili_idTili,
                PIN: rows[0].PIN,
                Korttinumero: rows[0].Korttinumero
            })
        }
    })
})

// Päivitä asiakkaan tietoja
router.post('/edit/:asiakas_idAsiakas',function(req,res,next){
    let asiakas_idAsiakas = req.body.asiakas_idAsiakas;
    let tili_idTili = req.body.tili_idTili;
    let PIN = req.body.PIN;
    let Korttinumero = req.body.Korttinumero;
    let errors = false;

    if(asiakas_idAsiakas.length === 0 || tili_idTili.length === 0){
        errors = true;

        req.flash('error', "Please enter something");
        res.render('kortti/edit', {
           asiakas_idAsiakas: asiakas_idAsiakas,
            tili_idTili: tili_idTili,
            PIN: PIN,
            Korttinumero
        })
    }
    // Jos ei erroreita
    if(!errors){
        var form_data = {
            asiakas_idAsiakas: asiakas_idAsiakas,
            tili_idTili: tili_idTili,
            PIN: PIN,
            Korttinumero: Korttinumero
        } // päivittää tietokantaan
        dbConn.query('UPDATE kortti SET ? WHERE asiakas_idAsiakas = ' + asiakas_idAsiakas, form_data,function(err, result){
            if(err){
                req.flash('error', err)
                res.render('kortti/edit',{
                    asiakas_idAsiakas: form_data.asiakas_idAsiakas,
                    tili_idTili: form_data.tili_idTili,
                    PIN: form_data.PIN,
                    Korttinumero: form_data.Korttinumero
                })
            } else {
                req.flash('success', 'kortti successfully updated');
                res.redirect('/kortti');
            }
        })

}
})
//Poista kortti
router.get('/delete/(:asiakas_idAsiakas)', function(req,res,next){
    let asiakas_idAsiakas = req.params.asiakas_idAsiakas;
    dbConn.query('DELETE FROM kortti WHERE asiakas_idAsiakas = ' + asiakas_idAsiakas,function(err, result){
        if (err){
            req.flash('error',err)
            res.redirect('/kortti')
        } else {
            req.flash('success', 'Card successfully deleted! ID = ' + asiakas_idAsiakas)
            res.redirect('/kortti')
        }
    })
})
module.exports = router;