const db = require('../database');
const tili = require('./tili_model');

const debit = {

    getDebit: function(id,callback){
        return db.query('select debit from tili where idTili=?',[id], callback)
    },
};
module.exports = debit;