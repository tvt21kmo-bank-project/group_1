const db = require('../database');

const tili = {
  getByID: function(id, callback) {
    return db.query('select * from tili where idTili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  add: function(tili, callback) {
    return db.query(
      'insert into tili (idTili, Tilinumero, debit, credit, tyyppi) values(?,?,?,?,?)',
      [tili.idTili, tili.Tilinumero, tili.debit,tili.credit, tili.tyyppi],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tili where idTili=?', [id], callback);
  },
  update: function(id, tili, callback) {
    return db.query(
      'update tili set Tilinumero=?, debit=?, credit=?, tyyppi=? where idTili=?',
      [tili.Tilinumero, tili.debit, tili.credit,tili.tyyppi,id],
      callback
    );
  }
};
module.exports = tili;