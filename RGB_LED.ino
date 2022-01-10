const int led_red = 4;
const int led_green = 3;
const int led_blue = 2;

void setup() {
    pinMode(led_red, OUTPUT);
    pinMode(led_green, OUTPUT);
    pinMode(led_blue, OUTPUT);
    Serial.begin(9600);
    while (!Serial);
   Serial.println("choose rgb colours!");
}

void loop() {
  if(Serial.available()>2){
    int red = Serial.parseInt();
    int green = Serial.parseInt();
    int blue = Serial.parseInt();
    
    Serial.print(red);
        Serial.print(green);

        Serial.print(blue);

    RGB(red, green, blue);
  }
 
  }

void RGB(int R, int G, int B) {
    analogWrite(led_red, R);
    analogWrite(led_green, G);
    analogWrite(led_blue, B);
}