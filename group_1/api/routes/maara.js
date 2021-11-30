const express = require('express');
const router = express.Router();
const maara = require('../models/maara_model.js');

router.get('/:id?',
function(request, response){
    if(request.params.id){
        maara.getByID(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
        maara.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});

router.put('/:idTili', 
function(request, response) {
  maara.update(request.params.idTili, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});
module.exports = router;