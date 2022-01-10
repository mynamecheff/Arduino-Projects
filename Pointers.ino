// C++ code
//
int variable_1 = 1234;
int variable_2 = 5678;

void setup()
{
   Serial.begin(9600);
   swap(&variable_1, &variable_2);

}

void loop()
{

}

void swap(int *first, int *second)
{
  int temp;
  temp = *first;
  Serial.println(*first = *second);
  Serial.println(*second = temp);

}