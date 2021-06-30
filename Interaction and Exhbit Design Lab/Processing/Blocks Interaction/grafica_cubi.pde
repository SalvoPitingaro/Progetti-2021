import processing.serial.*;

Serial myPort;

String val = null;
int nl = 10;
float myval;
PFont testo;
int mv1;

void setup()
{

  print(Serial.list());
 
size(1440, 900);
 String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
  

while (myPort.available() > 0) {
 String val1 = myPort.readStringUntil(nl);

if (val1 != null) {
float myval1 = float(val1);
int mv1 = int(myval1); 
println(mv1);
if(mv1 > 0)
{
  
}

  }
 }
}

void draw()
{
  //testo = createFont("NeueHaasDisplayLight.ttf", 32);
  testo = createFont("NeueHaasDisplayRoman.ttf", 32);
  background(255);
      //file.play();


while (myPort.available() > 0) {
    val = myPort.readStringUntil(nl);
  
fill(230, 230, 230);  // Set fill to gray
strokeWeight(0.5);
stroke(130, 130, 130);

          if (val != null) {

   

myval = float(val);
int mv = int(myval); 
println(myval);

switch(mv){
case 1:
quad((width/2)-50, (height/2)-0, 
     (width/2)-180, (height/2)-0, 
     (width/2)-130, (height/2)-50, 
     (width/2)-0, (height/2)-50);
break;

case 2:
quad((width/2)-50, (height/2)-0, 
     (width/2)-180, (height/2)-0, 
     (width/2)-130, (height/2)-50, 
     (width/2)-0, (height/2)-50);
quad((width/2), (height/2)-50, 
     (width/2)+130, (height/2)-50, 
     (width/2)+80, (height/2), 
     (width/2)-50, (height/2));
  break;   

case 3:
quad((width/2)-50, (height/2)-0, 
     (width/2)-180, (height/2)-0, 
     (width/2)-130, (height/2)-50, 
     (width/2)-0, (height/2)-50);
quad((width/2), (height/2)-50, 
     (width/2)+130, (height/2)-50, 
     (width/2)+80, (height/2), 
     (width/2)-50, (height/2));
quad((width/2)-50, (height/2)+0, 
     (width/2)-180, (height/2)+0, 
     (width/2)-230, (height/2)+50, 
     (width/2)-100, (height/2)+50);
  break; 
  
  case 4:
quad((width/2)-50, (height/2)-0, 
     (width/2)-180, (height/2)-0, 
     (width/2)-130, (height/2)-50, 
     (width/2)-0, (height/2)-50);
quad((width/2), (height/2)-50, 
     (width/2)+130, (height/2)-50, 
     (width/2)+80, (height/2), 
     (width/2)-50, (height/2));
quad((width/2)-50, (height/2)+0, 
     (width/2)-180, (height/2)+0, 
     (width/2)-230, (height/2)+50, 
     (width/2)-100, (height/2)+50);
quad((width/2)+50, (height/2)-100, 
     (width/2)+180, (height/2)-100, 
     (width/2)+130, (height/2)-50, 
     (width/2), (height/2)-50);
  break; 
}

fill (0);
noStroke();
strokeWeight(0);
rect(0, 790, 1440, 75);

fill (255);
noStroke();
textFont(testo);

textSize(22);
text("Costruttori:  "+val, 30, 828); 

textSize(22);
text("Metri cubi:  "+mv*100, 1265, 828); 

fill (0);
noStroke();

textSize(80);
text("M3", 30, 85); 

textSize(22);
strokeWeight(0);

 pushMatrix();
  float angle1 = radians(90);
  translate(1390, 30);
  rotate(angle1);
  text("Exhibition Design", 0, 0);
  popMatrix();
  
 pushMatrix();
  float angle2 = radians(90);
  translate(1365, 30);
  rotate(angle2);
  text("for human interaction", 0, 0);
  popMatrix();
  }
}


}
