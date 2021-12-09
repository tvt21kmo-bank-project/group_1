const express = require('express');
const router = express.Router();
const siirto = require('../models/siirto_model.js');

router.post('/debit_transfer', function(request, response){
    siirto.debit(request.body, function(err, dbResult){
        if(err){
            response.json(false);
        }
        else{
            response.json(true);
        }
    })
}
);

router.post('/:credit_transfer', 
function(request, response) {
  siirto.credit(request.body, function(err, dbResult) {
    if (err) {
      response.json(false);
    } else {
      response.json(true);
    }
  });
});
module.exports = router;