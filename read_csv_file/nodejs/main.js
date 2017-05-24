// run it with:
//    node main.js

var fs = require("fs");

fs.readFile('../test.csv', (err, data) => {
	if (err) {
		console.log(err.stack);
		return;
	}

	console.log(data.toString());
	console.log("end.");
});