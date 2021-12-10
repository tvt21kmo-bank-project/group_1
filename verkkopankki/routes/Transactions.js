var express = require('express');
var router = express.Router();
var dbConn  = require('../lib/db');


// Näytä asiakas sivu
router.get('/', function(req,res,next) {
    dbConn.query('SELECT aika,paikka,maara,Etunimi,Sukunimi,tilitapahtuma.tili_idTili\
    FROM tilitapahtuma\
    INNER JOIN tili ON tili.idTili = tilitapahtuma.tili_idTili\
    INNER JOIN kortti ON kortti.tili_idTili = tili.idTili\
    INNER JOIN asiakas ON asiakas.idAsiakas = kortti.asiakas_idAsiakas',function(err,rows) {
        console.log(rows)
        if(err){
            req.flash('error',err);
            res.render('tapahtumat',{data:''});
        } else {
            res.render('tapahtumat',{data:rows});
        }
    });
});

module.exports = router;
