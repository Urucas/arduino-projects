const int sensorPin = 0;
const int buzzerPin = 9;

int lightLevel, high = 0, low = 1023;

void setup() {
  
  Serial.begin(9600);
  
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  lightLevel = analogRead(sensorPin);
  
  playNote(lightLevel);
 
  // delay(3000);
}

/*
 note 	frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz
*/

void playNote(int lightLevel) {
  
  Serial.print("ightLevel: ");
  Serial.print(lightLevel);
  
   int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
   const int numFrecuencies = 8;
   
   int note = frequencies[0];
   int fixedLightLevel = lightLevel/2;
    for(int i=1; i< numFrecuencies; i++) {
     if(lightLevel > frequencies[i]) {
       note = frequencies[i];
     }
   }
   
   Serial.print(" note: ");
   Serial.println(note);
   tone(buzzerPin, note, 1000);
   delay(1000);
   
}
