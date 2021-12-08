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
var creditrouter =require('./routes/credit');
var debitrouter =require('./routes/debit');
var siirtorouter =require('./routes/siirto');
var nostorouter =require('./routes/nosto');
var PINrouter =require('./routes/Pinkoodinvaihto');
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
app.use('/credit',creditrouter);
app.use('/debit',debitrouter);
app.use('/siirto',siirtorouter);
app.use('/nosto',nostorouter);
app.use('/Pinkoodinvaihto',PINrouter);
module.exports = app;
