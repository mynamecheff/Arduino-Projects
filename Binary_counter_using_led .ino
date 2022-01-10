int led_red = 0; 
int led_yellow = 1; 
int led_green = 2; 
int i1=0;
int i2=0;
int i3=0;

int in1=0;
int in2=0;
int in3=0;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  
}

void loop() {
 delay(3000);
 if (!i3) in3=1;
 else in3=0;
 
 if ((i2 && !i3) || (!i2 && i3)) in2=1;
 else in2=0;
     
 if ((!i1 && i2 && i3) || (i1 && !i3) || (i1 && !i2)) in1=1;
 else in1=0;
  
 i1=in1;
 i2=in2;
 i3=in3;
  
 if(i1==1) digitalWrite(led_red,HIGH);
 else digitalWrite(led_red,LOW);
 if(i2==1) digitalWrite(led_yellow,HIGH);
 else digitalWrite(led_yellow,LOW);
 if (i3==1) digitalWrite(led_green,HIGH);
 else digitalWrite(led_green,LOW);
}