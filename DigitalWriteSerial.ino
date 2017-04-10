//Toggles pin 2-9 depending on provided Serial input
//Code originally from http://bildr.org

void setup(){
  Serial.begin(9600);

  //Set all the pins we need to output pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop (){
  if (Serial.available()) {

    //read serial as a character
    char ser = Serial.read();

    //NOTE because the serial is read as "char" and not "int", the read value must be compared to character numbers
    //hence the quotes around the numbers in the case statement
    switch (ser) {
      case '0':
        triggerPin(2);
        break;
      case '1':
        triggerPin(3);
        break;
      case '2':
        triggerPin(4);
        break;
      case '3':
        triggerPin(5);
        break;
      case '4':
        triggerPin(6);
        break;
      case '5':
        triggerPin(7);
        break;
      case '6':
        triggerPin(8);
        break;
      case '7':
        triggerPin(9);
        break;
      case '8':
        triggerPin(10);
        break;
      case '9':
        triggerPin(11);
        break;
    } 
  }
}

void triggerPin(int pin){
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}