const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const kirjautuminen = require('../models/kirjautuminen_model');

router.post('/', 
  function(request, response) {
    if(request.body.Korttinumero && request.body.PIN){
      const Korttinumero = request.body.Korttinumero;
      const PIN = request.body.PIN;
        kirjautuminen.checkPassword(Korttinumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult) 
              {
                if(compareResult) {
                  console.log("success");
                  response.send(true);
                }
                else {
                    console.log("wrong PIN");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Korttinumero or PIN missing");
      response.send(false);
    }
  }
);

module.exports=router;