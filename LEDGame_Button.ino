int Led1Pin = 2; 
int Led2Pin = 3; 
int Led3Pin = 4; 
int Led4Pin = 5;
int Led5Pin = 6;

int button = 8;


int posistion = 0;

int time = 1000;

long next = millis();

void setup()
{
  pinMode(Led1Pin, OUTPUT);
  pinMode(Led2Pin, OUTPUT);
  pinMode(Led3Pin, OUTPUT);
  pinMode(Led4Pin, OUTPUT);
  pinMode(Led5Pin, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
  Serial.begin(9600);
  
  newGame();
}

void loop()
{
  if(millis() - next >= time)
  {
    next = millis(); 
    
    posistion++; 
    if(posistion >= 6) posistion = 1;
    
    move(posistion);
  }
  
  if(digitalRead(button) == LOW) {
   
    if(posistion == 3)
    {
      digitalWrite(Led3Pin, LOW);
      delay(50);
      digitalWrite(Led3Pin, HIGH);
    
      if(time > 700)
      {
        time -= 100;
      } else if (time > 500)
      {
        time -= 50;
      } else if (time > 300)
      {
        time -= 25;
      } else if (time > 10)
      {
        time -= 10;
      } else if (time > 1)
      {
        time -= 1;
      }
      
      Serial.print("Score: ");
      Serial.println(1000 - time);
  }
  else{
 
      Serial.println("You lost");
      Serial.print("Score: ");
      Serial.println(1000 - time);
      
      for (int x = 0; x <= 10; x++)
      {
        if(digitalRead(posistion + 1) == LOW)
        {
          digitalWrite(posistion + 1, HIGH);
        }
        else
        {
          digitalWrite(posistion + 1, LOW);
        }
        delay(200);
      }
      
      digitalWrite(Led1Pin,HIGH);
      delay(500);
      if (time < 800)
      {
        digitalWrite(Led2Pin, HIGH);
        delay(500);
      }
      if (time < 600)
      {
        digitalWrite(Led3Pin, HIGH);
        delay(500);
      }
      if (time < 250)
      {
        digitalWrite(Led4Pin, HIGH);
        delay(500);
      }
      if (time < 100)
      {
        digitalWrite(Led5Pin, HIGH);
        delay(500);
      }
      delay(3000);
      
      newGame();
  }
}
}

void move(int posistion)
{
for (int x = Led1Pin; x <= Led5Pin;x++)
{
  digitalWrite(x, LOW);
}

digitalWrite(posistion + 1, HIGH);
}

void newGame()
{
  posistion = 0;
  time = 1000;
  Serial.println("Goal is to get 1000 points!!");
}
