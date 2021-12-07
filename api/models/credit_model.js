const db = require('../database');
const tili = require('./tili_model');

const credit = {
    getCredit: function(id,callback){
        return db.query('select credit, debit from tili where idTili=?', [id], callback)
    },

};
module.exports = credit;