
// the setup function runs once when you press reset or power the board




// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4;
const int stepsPerRevP = 360/18; 
const float gearRatio = 9/60;
const int interval = 20; //Milliseconds
const int revSpeed = numSteps*18/(interval*2);
const int stepsPerRevG = stepsPerRevP/gearRatio;
const int degreeRotMax = 90;
const int steps = stepsPerRevG* (degreeRot/360);
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(100);                       // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
 // delay(100);      

  digitalWrite(dirPin,HIGH); //dirPin sets direction 
  // Makes 20 pulses for making one full cycle rotation
  for(int x = 0; x < steps; x++) { 
    digitalWrite(stepPin,HIGH); 
    delay(interval); 
    digitalWrite(stepPin,LOW); 
    delay(interval); }
    
    delay(1000); // One second delay
    digitalWrite(dirPin,LOW);
     
     //Changes the rotations direction
    // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < steps; x++) {
    digitalWrite(stepPin,HIGH);
    delay(interval);
    digitalWrite(stepPin,LOW);
    delay(interval);}
   
   delay(1000);
}
