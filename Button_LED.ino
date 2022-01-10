int led_red = 4;
int button = 2;
int boo_val = 0;
void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop(){
  boo_val = digitalRead(button);
  if (boo_val == HIGH)	digitalWrite(led_red,LOW);
  
  else digitalWrite	(led_red, HIGH);
}