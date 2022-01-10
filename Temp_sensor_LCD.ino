const int tmp = A0;
int sensorValue = 0;

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  pinMode(tmp, INPUT);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  
  delay(1000); // improve performance
 int reading = analogRead(sensorValue);  
 
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 float temperature = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
  lcd.print(temperature);
  delay(1000);
                                               //to degrees ((voltage - 500mV) times 100)
 
 
  String two = (" degrees C");
  Serial.print(temperature);
  Serial.println(two + (char)176);
  
}
 