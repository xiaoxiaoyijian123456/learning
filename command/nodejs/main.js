// run it with:
//    npm init
//    npm install commander --registry=https://registry.npm.taobao.org --save
//    node main.js
//    node main.js --port=9091
//    node main.js -p 9091

var program = require('commander');

program
	.version('0.0.1')
	.option('-p, --port <v>', 'set port', parseInt)
	.parse(process.argv);

let port = 9090
if (program.port) {
	port = program.port
}
console.log('port=%j', port);