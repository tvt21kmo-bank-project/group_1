const db = require('../database');


const PIN = {

  update: function(id, kortti, callback) {

 
    return db.query(
      'update kortti set PIN=? where asiakas_idAsiakas=?',
      [kortti.PIN, id],
      callback);}
  };

module.exports = PIN;