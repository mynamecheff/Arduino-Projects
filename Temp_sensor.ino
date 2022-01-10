const int tmp = A0;
const int led_green = 2;
const int led_yellow = 3;
const int led_red = 4;
int sensorValue = 0;

void setup()
{
  pinMode(tmp, INPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
   delay(1000); // improve performance
 int reading = analogRead(sensorValue);  
 
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 float temperature = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
 
 
 // String two = (" degrees C");
//  Serial.print(temperature);
 // Serial.println(two + (char)176);  
 
  if (temperature <= 18){
    Serial.print("It is pretty cold in here!");
    digitalWrite(led_green,HIGH);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_red,LOW);
  }
  
    if ((temperature >= 18)&& (temperature <= 25)){
    Serial.print("The tempreture is perfercet!");
    digitalWrite(led_green,LOW);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_red,LOW);
    }
  
   if (temperature >= 26){
    Serial.print("It's getting hot in here!");
    digitalWrite(led_green,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_red,HIGH);
   }
}