#define LED 13 // LED connected to digital pin 13


// set up code before loop
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);  //sets the digital pin as output
}


// looping through your code
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH); //turns the led on
  delay(100);            // waits
  digitalWrite(LED,LOW);  //turns the led off
  delay(1000);            //waits
}
