// Require the serialport node module
var serialport = require('serialport');
var fs = require('fs');

var connect = require('connect');
var serveStatic = require('serve-static');
connect().use(serveStatic(__dirname)).listen(8080, function(){
    console.log('Server running on 8080...');
});

// Open the port
var port = new serialport("/dev/cu.HC-06-DevB", {
    baudRate: 9600
});

let points = {};
let counter = 0;
let flag = 0;

// Read the port data
port.on("open", function () {
  console.log('open\n');
  port.on('data', function(data) {
    console.log(data[0]-48, data[1] -48, data[2]-48);

    if (data.length === 1) {
      flag = data[0] - 48;
      counter++;
    } else {
      points[counter] = {
        'row': '',
        'phi': '',
        'theta': ''
      };

      let temp = '';
      temp = temp.concat(data[0] - 48) + temp.concat(data[1] - 48) + temp.concat(data[2] - 48);

      switch(flag) {
        case 1:
          points[counter].row = temp;
          break;
        case 2:
          points[counter].phi = temp;
          break;
        case 3:
          points[counter].theta = temp;
          break;
        default:
          break;
      }
    }

    console.log(points);
    fs.writeFile("./test.json", "Hey there!", function(err) {
      if(err) {
          return console.log(err);
      }
      console.log("The file was saved!");
    }); 
  });
});