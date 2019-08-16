
// the setup function runs once when you press reset or power the board




// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4;
const int stepsPerRevP = 360/18;
const int numSteps = stepsPerRevP; 
const int interval = 20; //Milliseconds
int counter = 0;
const int numLoops = 10; //Number of times to execute loop
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(100);                       // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
 // delay(100);
}
      
void loop(){
  

  
  digitalWrite(dirPin,HIGH); //dirPin sets direction 
 
  if(counter<numLoops){
  for(int x = 0; x < numSteps; x++) { 
    digitalWrite(stepPin,HIGH); 
    delay(interval); 
    digitalWrite(stepPin,LOW); 
    delay(interval); }

    delay(1000); // One second delay
    digitalWrite(dirPin,LOW);
     
     //Changes the rotations direction
    // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < numSteps; x++) {
    digitalWrite(stepPin,HIGH);
    delay(interval);
    digitalWrite(stepPin,LOW);
    delay(interval);}}
    
    if(counter>numLoops){
      delay(2000);
    }
    
    delay(1000);
    counter += 1;
    
}


  
