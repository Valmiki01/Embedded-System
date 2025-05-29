// Sketch corrected
char inputByte; 

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    inputByte = Serial.read();   
    Serial.println(inputByte);
    
    if (inputByte == '1') {
      digitalWrite(12, HIGH);    // Turn LED ON
    } 
    else if (inputByte == '0') {
      digitalWrite(12, LOW);     // Turn LED OFF
    }
  }
}