const express = require('express');
const router = express.Router();
const saldo = require('../models/saldo_model.js');



router.get('/:id?',
function(request,response){
    if(request.params.id){
        saldo.getSaldo(request.params.id, function(err,dbResult){
            if(err){
                response.json(err);
            } else{
                response.json(dbResult[0]);
            }
        });
    }
}
);


router.put('/:idTili', 
function(request, response) {
  saldo.update(request.params.idTili, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});
module.exports = router;