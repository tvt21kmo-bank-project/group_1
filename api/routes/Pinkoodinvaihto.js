const express = require('express');
const router = express.Router();
const PIN = require('../models/Pinkoodinvaihto_model.js');

router.put('/:asiakas_idAsiakas', 
function(request, response) {
  PIN.update(request.params.asiakas_idAsiakas, request.body, function(err, dbResult) {
    if (err) {
      response.json(false);
    } else {
      response.json(true);
    }
  });
});

module.exports = router;