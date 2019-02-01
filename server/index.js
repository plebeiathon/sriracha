// Require the serialport node module
var serialport = require('serialport');
var fs = require('fs');

var connect = require('connect');
var serveStatic = require('serve-static');
connect().use(serveStatic('./index.html')).listen(8080, function () {
  console.log('Server running on 8080...');
});

// Open the port
var port = new serialport("/dev/cu.HC-06-DevB", {
  baudRate: 9600 // remember to check baudrate
});

let points = {};
let counter = 0;

// Read the port data
port.on("open", function () {
  console.log('open\n');
  port.on('data', function (data) {
    let result = [];
    for (var i = 0; i < data.length; i++) {
      result[i] = data[i];
    }
    // console.log('\033[2J'); // clear console
    console.log(result, ":len:", data.length);
    file = fs.createWriteStream('./test.txt');
    var buf = Buffer.from(JSON.stringify(points));
    file.write(buf);
    // console.log(points);

    function end() {
      file.end();
      console.log("Stream closed.")
      return 0;
    }

    const sleep = (ms) => {
      return new Promise(resolve => setTimeout(resolve, ms));
    }

    const test = async () => {
      await sleep(5000);
      file.end();
    }

    test(); 
  });
});