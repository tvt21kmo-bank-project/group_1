const db = require('../database');

const nosto = {

    debit: function(postData,callback){
        return db.query(
            'call debit_withdraw(?,?,?)',
            [postData.id1, postData.id2, postData.summa],
            callback
        );
    },

    credit: function(postData,callback){
        return db.query(
            'call credit_withdraw(?,?,?)',
            [postData.id1, postData.id2, postData.summa],
            callback
        );
    }
};
module.exports = nosto;