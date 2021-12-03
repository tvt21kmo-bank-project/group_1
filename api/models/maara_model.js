const db = require('../database');

const maara = {
    getByID: function(id, callback) {
        return db.query('select maara from tili where idTili=?', [id], callback);
      },
      getAll: function(callback) {
        return db.query('select maara from tili', callback);
      },
      update: function(id, tili, callback) {
        return db.query(
          'update tili set maara=? where idTili=?',
          [tili.maara,id],
          callback
        );
      }
};
module.exports = maara;