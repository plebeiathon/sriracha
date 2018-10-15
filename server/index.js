// Require the serialport node module
var serialport = require('serialport');
var fs = require('fs');

var connect = require('connect');
var serveStatic = require('serve-static');
connect().use(serveStatic('./index.html')).listen(8080, function(){
    console.log('Server running on 8080...');
});

// Open the port
var port = new serialport("/dev/cu.HC-06-DevB", {
    baudRate: 9600
});

let points = {};
let counter = 0;

// Read the port data
port.on("open", function () {
  console.log('open\n');
  port.on('data', function(data) {
     console.log(data[0] - 48, data[1] - 48, data[2] - 48, ":len:", data.length);
      if (data.length === 8) {
        points[counter] = {
          'row': '',
          'theta': ''
        };

        let r = '', t = '';
        points[counter].row = r.concat(data[0] - 48) + r.concat(data[1] - 48) + r.concat(data[2] - 48);
        points[counter].theta = t.concat(data[3] - 48) + t.concat(data[4] - 48) + t.concat(data[5] - 48);
        counter++;
      }

    //console.log(points);
    file = fs.createWriteStream('./test.txt');
    var buf = Buffer.from(JSON.stringify(points));
    file.write(buf);
    console.log(points);

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
      console.log('Stream Closed');
    }

    test();
      
  });
});