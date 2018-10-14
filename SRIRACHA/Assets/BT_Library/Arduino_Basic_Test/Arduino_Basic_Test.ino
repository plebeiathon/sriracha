int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int state;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
   Serial.begin(9600);
// digitalWrite(redPin, HIGH);
}
 
void loop()
{
  if(Serial.available())
  {
    state = Serial.read();       //255155055
  }
  int red = (state / 1000000);
  int green = (state % 1000000) / 1000;
  int blue = state % 1000;
  
  setColor(red, green,blue);
  delay (1000);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
