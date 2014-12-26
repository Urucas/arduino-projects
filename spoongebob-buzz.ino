const int buzzerPin = 9;

char notes[] = "ggagecegagg";
int beats[] = {1,1,1,1,1,1,1,1,1,1,1,2};

const int songLength = 11;

int tempo = 150;

void setup(){
  pinMode(buzzerPin, OUTPUT);
}

void loop(){

  int i, duration;
  for (i = 0; i < songLength; i++){
    duration = beats[i] * tempo; 
    
    if (notes[i] == ' '){
      delay(duration);           
    }
    else {
      tone(buzzerPin, frequency(notes[i]), duration);
      delay(duration);          
    }
    delay(tempo/10);            
  }
  while(true){}
}

int frequency(char note) 
{
  int i;
  const int numNotes = 8;  // number of notes we're storing
  
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
  
  for (i = 0; i < numNotes; i++){
    if (names[i] == note){
      return(frequencies[i]);
    }
  }
  return(0); 
}
