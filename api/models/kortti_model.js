const db = require('../database');
const bcrypt = require('bcryptjs');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where asiakas_idAsiakas=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    
      bcrypt.hash(kortti.PIN,10,function(err,hash){
        return db.query(
      'insert into kortti (asiakas_idAsiakas,tili_idTili,PIN,Korttinumero) values(?,?,?,?)',
      [kortti.asiakas_idAsiakas, kortti.tili_idTili, hash, kortti.Korttinumero],
      callback);});
      
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where asiakas_idAsiakas=?', [id], callback);
  },
  update: function(id, kortti, callback) {

    bcrypt.hash(kortti.PIN,10,function(err,hash){
    return db.query(
      'update kortti set PIN=?,Korttinumero=? where asiakas_idAsiakas=?',
      [hash, kortti.Korttinumero, id],
      callback);});
  }
};
module.exports = kortti;