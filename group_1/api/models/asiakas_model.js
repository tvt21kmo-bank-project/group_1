const db = require('../database');

const asiakas = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (idAsiakas,Etunimi,Sukunimi,Hetu,Osoite,Puhelin) values(?,?,?,?,?,?)',
      [asiakas.idAsiakas, asiakas.Etunimi, asiakas.Sukunimi, asiakas.Hetu, asiakas.Osoite, asiakas.Puhelin],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where idAsiakas=?', [id], callback);
  },
  update: function(idAsiakas, asiakas, callback) {
    return db.query(
      'update asiakas set Etunimi=?,Sukunimi=?, Hetu=?, Osoite=?, Puhelin=? where idAsiakas=?',
      [asiakas.Etunimi, asiakas.Sukunimi, asiakas.Hetu, asiakas.Osoite, asiakas.Puhelin, idAsiakas],
      callback
    );
  }
};
module.exports = asiakas;