int fotores_sens1;
int foto_val1 = 0;

int fotores_sens2;
int foto_val2 = 0;

int fotores_sens3;
int foto_val3 = 0;

int fotores_sens4;
int foto_val4 = 0;

int result;

int soglia = 5;
int buzzerPin = 2;


int i1 = 0;
int i2 = 0;
int i3 = 0;
int i4 = 0;

void setup()
{
Serial.begin(9600);
pinMode(buzzerPin, OUTPUT);
}

void loop()
{    fotores_sens1=analogRead(A0);
  //Serial.println(fotores_sens1);
  
  if(fotores_sens1<soglia){
  //Buio
  //digitalWrite(2,HIGH);
   foto_val1=0;
   i1 = 0;
  }else if(fotores_sens1>soglia && i1==0){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val1=1;
   tone(buzzerPin, 2000, 500);
   delay(1000);
   noTone(buzzerPin);
i1=1;
  }
  else if(fotores_sens1>soglia && i1==1){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val1=1;
  }

fotores_sens1=analogRead(A1);
  //Serial.println(fotores_sens1);
  
  if(fotores_sens2<soglia){
  //Buio
  //digitalWrite(2,HIGH);
   foto_val2=0;
   i2 = 0;
  }else if(fotores_sens2>soglia && i2==0){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val2=1;
   tone(buzzerPin, 5000, 500);
   delay(1000);
     noTone(buzzerPin);
i2=1;
  }
  else if(fotores_sens2>soglia && i2==1){
  //LUCE
  //digitalWrite(2,LOW);  


   foto_val2=1;
  }



fotores_sens1=analogRead(A2);
  //Serial.println(fotores_sens1);
  
  if(fotores_sens3<soglia){
  //Buio
  //digitalWrite(2,HIGH);
   foto_val3=0;
   i3 = 0;
  }else if(fotores_sens3>soglia && i3==0){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val3=1;
   tone(buzzerPin, 800, 500);
   delay(1000);
   noTone(buzzerPin);
i3=1;
  }
  else if(fotores_sens3>soglia && i3==1){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val3=1;
  }




fotores_sens1=analogRead(A3);
  //Serial.println(fotores_sens1);
  
  if(fotores_sens4<soglia){
  //Buio
  //digitalWrite(2,HIGH);
   foto_val4=0;
   i4 = 0;
  }else if(fotores_sens4>soglia && i4==0){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val4=1;
   tone(buzzerPin, 3000, 500);
   delay(1000);
   noTone(buzzerPin);
i4=1;
  }
  else if(fotores_sens4>soglia && i4==1){
  //LUCE
  //digitalWrite(2,LOW);
   foto_val4=1;
  }

  
  fotores_sens2=analogRead(A1);
  //Serial.println(fotores_sens2);
  
  if(fotores_sens2<soglia){
  //Buio
  //digitalWrite(4,HIGH);
   foto_val2=0;
  }else{
  //LUCE
  //digitalWrite(4,LOW);
   foto_val2=1;
  }

    fotores_sens3=analogRead(A3);
  //Serial.println(fotores_sens3);
  
  if(fotores_sens3<soglia){
  //Buio
  //digitalWrite(7,HIGH);
   foto_val3=0;
  }else{
  //LUCE
  //digitalWrite(7,LOW);
   foto_val3=1;
  }

    fotores_sens4=analogRead(A2);
  //Serial.println(fotores_sens4);
  
  if(fotores_sens4<soglia){
  //Buio
  //digitalWrite(8,HIGH);
   foto_val4=0;
  }else{
  //LUCE
  //digitalWrite(8,LOW);
   foto_val4=1;
  }

 result=foto_val1+foto_val2+foto_val3+foto_val4;
Serial.println(result);

}
