const express = require('express');
const router = express.Router();
const debit = require('../models/debit_model.js');


router.get('/:id?',
function(request,response){
    if(request.params.id){
        debit.getDebit(request.params.id, function(err,dbResult){
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