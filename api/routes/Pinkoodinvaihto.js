const express = require('express');
const router = express.Router();
const PIN = require('../models/Pinkoodinvaihto_model.js');
<<<<<<< Updated upstream
=======
const bcrypt = require('bcryptjs');
>>>>>>> Stashed changes


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