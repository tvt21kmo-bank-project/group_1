const express = require('express');
const router = express.Router();
const PIN = require('../models/Pinkoodinvaihto_model.js');
const bcrypt = require('bcryptjs');

router.put('/:asiakas_idAsiakas', 
function(request, response) {
  PIN.update(request.params.asiakas_idAsiakas, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;