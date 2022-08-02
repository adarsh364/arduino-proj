//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int x = 100;
boolean y = true;
void setup()
{
                         // initialize the lcd 
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("no of objects:");


  if( y == true){
 
    lcd.setCursor(0,1);
  lcd.print("   ");
  
  lcd.setCursor(0,1);
  lcd.print(x);
  delay(1000);
   x--;
  }
  
 
  // Print a message to the LCD.
  
  

}
  
  
  

  
  



void loop()
{
}
