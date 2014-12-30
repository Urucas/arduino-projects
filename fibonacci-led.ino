int ledPin = 9;
int last = 1, j = 1; 

void setup(){
  
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  if(j == 1){
    Serial.print("Current: ");
    Serial.println(j);
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    delay(1000);
  }
  
  fibonacci();
  delay(1000);
}

void fibonacci(){
  
   Serial.print("Current: ");
   Serial.println(j);
   for(int i=1; i<=j; i++){
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  
  int aux = j;
  j = j + last;
  last = aux;

}
