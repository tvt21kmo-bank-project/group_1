const db = require('../database');
const tili = require('./tili_model');

const saldo = {
    getSaldo: function(id,callback){
        return db.query('select saldo from tili where idTili=?', [id], callback)
    },

   

    update: function(id,tili,callback){
        return db.query(
            'update tili set saldo = saldo - maara where IdTili=?',
            [id, tili.Saldo,tili.maara],
            callback
        );
    }
};
module.exports = saldo;