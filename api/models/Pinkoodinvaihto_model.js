const db = require('../database');


const PIN = {

    update: function(id, kortti, callback) {
  
   
      bcrypt.hash(kortti.PIN,10,function(err,hash){
        return db.query(
          'update kortti set PIN=? where asiakas_idAsiakas=?',
          [hash, id],
          callback);});
      }
  };
module.exports = PIN;