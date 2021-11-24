const db = require('../database');
const tili = require('./tili_model');

const saldo = {
    getSaldo: function(id,callback){
        return db.query('select saldo from tili where idtili=?', [id], callback)
    },

   

    update: function(id,tili,callback){
        return db.query(
            'update tili set saldo = saldo - maara',
            [tili.Saldo,tili.maara, id],
            callback
        );
    }
};
module.exports = saldo;