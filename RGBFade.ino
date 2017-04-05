int redLEDPin = 11;
int greenLEDPin = 10;
int blueLEDPin = 9;

int brightnessRed = 0;    // how bright the LED is
int brightnessGreen = 0;    // how bright the LED is
int brightnessBlue = 0;    // how bright the LED is
int fadeAmountRed = 5;    // how many points to fade the LED by
int fadeAmountGreen = 10;    // how many points to fade the LED by
int fadeAmountBlue = 15;    // how many points to fade the LED by


void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:

   // set the brightness of the LEDS
  analogWrite(redLEDPin, brightnessRed);
  analogWrite(greenLEDPin, brightnessGreen);
  analogWrite(blueLEDPin, brightnessBlue);

    // change the brightness for next time through the loop:
  brightnessRed = brightnessRed + fadeAmountRed;
  brightnessGreen = brightnessGreen + fadeAmountGreen;
  brightnessBlue = brightnessBlue + fadeAmountBlue;

  // reverse the direction of the fading at the ends of the fade:
  if (brightnessRed <= 0 || brightnessRed >= 240) {
    fadeAmountRed = -fadeAmountRed;
  }
   // reverse the direction of the fading at the ends of the fade:
  if (brightnessGreen <= 0 || brightnessGreen >= 240) {
    fadeAmountGreen = -fadeAmountGreen;
  }
   // reverse the direction of the fading at the ends of the fade:
  if (brightnessBlue <= 0 || brightnessBlue >= 240) {
    fadeAmountBlue = -fadeAmountBlue;
  }



  // wait for 30 milliseconds to see the dimming effect
  delay(100);

}
