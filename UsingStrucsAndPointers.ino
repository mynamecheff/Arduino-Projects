// C++ code
//

struct Animal{
int age;
int weight;
int height;
String name;
String location;
};

Animal kolibri = {23,42,23, "kolibri", "safari"};
Animal Ket = {12, 7, 40, "Ket", "domoy"};

  void setup()
{
   Serial.begin(9600);
   Serial.println("etot kolibri");
    printAnimal(kolibri);
  Serial.println();
  Serial.println("etot kot");
    Serial.println();
  printAnimal(Ket);
   
    swapAge(kolibri, Ket);
	sort(kolibri,Ket);
}

void loop()
{
  
}

void swapAge(struct Animal first, struct Animal second){
  int temp;
  temp = first.age;
  Serial.println();
  Serial.println("swapped age");
  Serial.println(first.age = second.age);
  Serial.println(second.age = temp);
}

void printAnimal (struct Animal zhivotnoye){
 Serial.println(zhivotnoye.age);
  Serial.println(zhivotnoye.weight);
  Serial.println(zhivotnoye.height);
  Serial.println(zhivotnoye.name);
  Serial.println(zhivotnoye.location);
   
}

void sort(struct Animal first, struct Animal second){
  if (first.age > second.age){
     int temp;
  temp = first.age;
  Serial.println();
  Serial.println("The age of the first animal is higher then the latter therefore their ages have been swapped!");
    Serial.println("What is this exercise I do not understand???");

    Serial.println(first.age = second.age);
  Serial.println(second.age = temp);
  
  }
}