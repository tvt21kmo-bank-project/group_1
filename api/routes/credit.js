const express = require('express');
const router = express.Router();
const credit = require('../models/credit_model.js');



router.get('/:id?',
function(request,response){
    if(request.params.id){
        credit.getCredit(request.params.id, function(err,dbResult){
            if(err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
}
);

module.exports = router;