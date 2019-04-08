#define REDPIN 3 //define PINS
#define GREENPIN 5
#define BLUEPIN 6

int RED; //variables to store the random RGB value
int GREEN;
int BLUE;

void setup() {
  // put your setup code here, to run once:
  pinMode (REDPIN, OUTPUT); //pinMode for the PWM Pins
  pinMode (GREENPIN, OUTPUT);
  pinMode (BLUEPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  RED = random(0,255); //Random colors
  GREEN = random(0,255);
  BLUE = random(0,255);

  Serial.print("Red:"); // pint the values on the serial monitor
  Serial.print(RED);
  Serial.print(',');
  Serial.print("Green:");
  Serial.print(GREEN);
  Serial.print(',');
  Serial.print("Blue:");
  Serial.println(BLUE);
  

  analogWrite(REDPIN,RED); //full random color 
  analogWrite(GREENPIN,GREEN);
  analogWrite(BLUEPIN,BLUE);

  delay(2000);

  analogWrite(REDPIN,RED); //red
  analogWrite(GREENPIN,255); //255 turns off the LED
  analogWrite(BLUEPIN,255);

  delay(1000);

  analogWrite(REDPIN,255); //green
  analogWrite(GREENPIN,GREEN);
  analogWrite(BLUEPIN,255);

  delay(1000);

  analogWrite(REDPIN,255); //blue
  analogWrite(GREENPIN,255);
  analogWrite(BLUEPIN,BLUE);

  delay(1000);

  analogWrite(REDPIN,255); //other random colors turning off just one of the LEDs
  analogWrite(GREENPIN,GREEN);
  analogWrite(BLUEPIN,BLUE);

  delay(1000);

  analogWrite(REDPIN,RED);
  analogWrite(GREENPIN,GREEN);
  analogWrite(BLUEPIN,255);

  delay(1000);

  analogWrite(REDPIN,RED);
  analogWrite(GREENPIN,255);
  analogWrite(BLUEPIN,BLUE);

  delay(1000);

  analogWrite(REDPIN,255); //everyting off just to pause
  analogWrite(GREENPIN,255);
  analogWrite(BLUEPIN,255);

  delay(1000);
  
}
