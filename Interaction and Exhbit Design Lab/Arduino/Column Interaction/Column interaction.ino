/*int trig_pin=10;
int echo_pin=9;
long distanza;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig_pin,OUTPUT);
pinMode(echo_pin,INPUT);
digitalWrite(trig_pin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trig_pin, HIGH);
delayMicroseconds(10);
digitalWrite(trig_pin, LOW);
unsigned long tempo= pulseIn(echo_pin, HIGH);
float distanza=0.0349 * tempo/2;

if (distanza<30){
  Serial.println("30");
  }
else if (distanza>10){
  Serial.println("100");
  }

//Serial.println();
delay(100);

}*/

/*
  Lezione 2 Difficile: Il sensore ad Ultrasuoni
  Creato il 12 Mar 2019
  da Andrea Primavera
*/
const int pinTrigger = 10;
const int pinEcho    = 9;

int tot_distanza = 0;
 
void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
}
 
void loop() { 
distance_conditions();
  
  /*Serial.print("distanza: ");
  // dopo 38ms è fuori dalla portata del sensore
  if( durata > 38000 ){
    Serial.println("Fuori portata");
  }
  else{ 
    Serial.print(distanza); 
    Serial.println(" cm");
  }
   */
   
   }
   
  // Aspetta 1000 microsecondi prima di generare l'impulso successivo
  

  void distance_conditions(){
{
  digitalWrite(10, LOW);
  // imposta l'uscita del trigger HIGH per 10 microsecondi
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);
  
  // calcolo del tempo attraverso il pin di echo
  long durata = pulseIn(9, HIGH);
  long distanza = 0.034 * durata / 2;
//Serial.println(distanza);

if(distanza < 2000){
  if(distanza <= 130){
    Serial.println(30);
  }
  else{
  
  Serial.println(100);
  }
}

  delay(1000);
  }
  }
