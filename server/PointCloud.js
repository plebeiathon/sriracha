const jsdom = require('jsdom');

const { JSDOM } = jsdom;

const global.window = (new JSDOM(``, { pretendToBeVisual: true })).window;
window.requestAnimationFrame(timestamp => {
  console.log(timestamp > 0);
});
 

// Require pixi module 
const pixi = require('pixi.js');
 
// You can use either WebGLRenderer or CanvasRenderer 
var renderer = pixi.WebGLRenderer(800, 600);
document.body.appendChild(renderer.view);
 
var stage = new pixi.Stage();
var bunnyTexture = pixi.Texture.fromImage("./assets/explodedView.png");
var bunny = new pixi.Sprite(bunnyTexture);
 
bunny.position.x = 400;
bunny.position.y = 300;
bunny.scale.x = 2;
bunny.scale.y = 2;
 
stage.addChild(bunny);
 
requestAnimationFrame(animate);
 
function animate() {
    bunny.rotation += 0.01;
 
    renderer.render(stage);
 
    requestAnimationFrame(animate);

}