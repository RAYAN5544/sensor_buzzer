// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
int val =analogRead(A0);
  Serial.println(val);
if(val<=85){
  tone(9,500);}
else{ 
  noTone(9); } 
}