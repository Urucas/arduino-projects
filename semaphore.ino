// define LED pins
int greenLight = 2;
int yellowLight = 3;
int redLight = 4;

void setup()
{
  pinMode(greenLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(redLight, OUTPUT);
}

void loop() {
  
  go();
  delay(5000);
  
  precaution();
  delay(2000);
  
  wait();
  delay(5000);
  
  prepare();
  delay(1000);
}

void go() {
  
  digitalWrite(greenLight, HIGH);
  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, LOW);
  
}

void precaution() {
  
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  digitalWrite(redLight, LOW);
  
}

void wait() {
  
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, HIGH);
 
}

void prepare() {
  
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  digitalWrite(redLight, HIGH);

}
