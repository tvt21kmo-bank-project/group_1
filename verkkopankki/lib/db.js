var mysql = require('mysql');
var connection = mysql.createConnection({
	host:'localhost',
	user:'root',
<<<<<<< Updated upstream
	password:'Teletappi',
=======
	password:'root',
>>>>>>> Stashed changes
	database:'kvgbank'
});
connection.connect(function(error){
	if(!!error) {
		console.log(error);
	} else {
		console.log('Connected..!');
	}
});

module.exports = connection;