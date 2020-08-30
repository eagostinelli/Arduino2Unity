const int pin_button1 = 8; // yellow-left (You can choose your digital pin to use for this)
const int pin_button2 = 2; // green-right (You can choose your digital pin to use for this)


void setup() {
  Serial.begin(9600);

  pinMode(pin_button1, INPUT);
  pinMode(pin_button2, INPUT);

}

void loop() {

  // yellow-left  
  if(digitalRead(pin_button1)==LOW){
    //Serial.println("yellow-left");
    Serial.write(1);
    Serial.flush();
    delay(20);
    }

  // green-right
  if(digitalRead(pin_button2)==LOW){
    //Serial.println("green-right");
    Serial.write(2);
    Serial.flush();
    delay(20);
    
    }

}
