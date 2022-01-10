const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
int read;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    read = Serial.read();

    for(int i = led1; i <= led5; i++){
      digitalWrite(i,LOW);
    }

 
    if( read == 'a'){
      digitalWrite(led1,HIGH);
      Serial.println("works");
    }else if(read == 'b'){
      digitalWrite(led2,HIGH);
    }else if(read == 'c'){
      digitalWrite(led3,HIGH);
    }else if(read == 'd'){
      digitalWrite(led4,HIGH);
    }else if(read == 'e'){
      digitalWrite(led5,HIGH);
    }

  }
}