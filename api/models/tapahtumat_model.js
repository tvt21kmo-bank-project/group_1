const db = require('../database');

const tilitapahtuma = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtuma where tili_idTili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtuma', callback);
  },
  add: function(tilitapahtuma, callback) {
    return db.query(
      'insert into tilitapahtuma (idTilitapahtuma, aika,paikka,maara, tili_idTili) values(?,?,?,?,?)',
      [tilitapahtuma.idTilitapahtuma, tilitapahtuma.aika, tilitapahtuma.paikka, tilitapahtuma.maara, tilitapahtuma.tili_idTili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtuma where tili_idTili=?', [id], callback);
  },
  update: function(idTilitapahtuma, tilitapahtuma, callback) {
    return db.query(
      'update tilitapahtuma set aika=?, paikka=?,maara=?, tili_idTili=? where idTilitapahtuma=?',
      [tilitapahtuma.aika, tilitapahtuma.paikka, tilitapahtuma.maara, tilitapahtuma.tili_idTili, idTilitapahtuma],
      callback
    );
  }
};
module.exports = tilitapahtuma;