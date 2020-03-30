#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,7,6,5,4);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(8,INPUT);
  
}

void loop()
{
  int a = digitalRead(8);
  Serial.println(a);
  
  if(a==1)
  {
  lcd.setCursor(2,0);
  lcd.print("You Already Wash Your Hand");
  delay(10000);
  lcd.clear();
  }
  else
  {
  lcd.print ("You are not wash your hand");
  delay(1000);
  lcd.clear();  
  }
}