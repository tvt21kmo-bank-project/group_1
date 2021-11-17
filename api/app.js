var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var asiakasRouter = require('./routes/asiakas');
var korttiRouter = require('./routes/kortti');
var tiliRouter = require('./routes/tili');
var tapahtumaRouter = require('./routes/tapahtumat');
var kirjautuminenrouter = require('./routes/kirjautuminen');
var saldorouter = require('./routes/saldo');
var maararouter = require('./routes/maara');
const maara = require('./models/maara_model');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/asiakas', asiakasRouter);
app.use('/kortti',korttiRouter);
app.use('/tili', tiliRouter);
app.use('/tapahtumat',tapahtumaRouter);
app.use('/kirjautuminen',kirjautuminenrouter);
app.use('/saldo',saldorouter);
app.use('/maara',maararouter);

module.exports = app;
