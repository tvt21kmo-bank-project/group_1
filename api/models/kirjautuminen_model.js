const db = require('../database');

const kirjautuminen={
  checkPassword: function(Korttinumero, callback) {
      return db.query('SELECT PIN,asiakas_idAsiakas FROM kortti WHERE Korttinumero = ?',[Korttinumero], callback); 
    }
};
          
module.exports = kirjautuminen;