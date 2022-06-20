#include <LiquidCrystal.h>
String arrivingdatabyte; 
LiquidCrystal lcd(11, 9, 6, 5, 4, 3);

void setup()//method used to run the code for once 
{
  lcd.begin(16, 2);//LCD order
  lcd.print("Finger counter ");//prints on LCD
  lcd.setCursor(0,1);//Setting the cursor on LCD
  lcd.print("He153732");//prints on LCD
  delay(1000);//delay of 1 second
}

void loop() //used to run the code repeatedly
{lcd.print("Finger counter ")
 void loop( )  
{  
if(Serial.available( ) > 0) 
 {  
    arrivingdatabyte = Serial.readStringUntil( '\n');
    if(arrivingdatabyte=="1")
     { 
       lcd.print("One")      
     }  
     if(arrivingdatabyte=="2")
     { 
       lcd.print("Two")      
     } 
      if(arrivingdatabyte=="3")
     { 
       lcd.print("Three")         
     } 
      if(arrivingdatabyte=="4")
     { 
       lcd.print("Four")         
     } 
      if(arrivingdatabyte=="5")
     { 
       lcd.print("Five")         
     } 
     if(arrivingdatabyte=="0")
     { 
       lcd.print("Zero")         
     }      
  }
 Serial.println(arrivingdatabyte);  
}
}