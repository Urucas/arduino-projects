int ledPin = 9;
int buzzPin = 10;

int times[] = {2,2,2,4,4,4,2,2,2};
int len = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop(){
  sos();
  delay(3000);
}

void sos(){
  
  for(int i=0; i<len; i++){
    int duration = times[i] * 100;
    digitalWrite(ledPin, HIGH);
    tone(buzzPin, 400, duration);
    delay(duration); 
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}
