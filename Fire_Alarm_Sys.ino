//ANIMESH PANDEY FIRE ALARM SYSTEM
float  temp;
float vout;
float vout1;
int LED=13;
int gassensor;
int buzzer=7;

void setup(){
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(LED,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);}

void loop(){
  vout=analogRead(A1);
  vout1=(vout/1023)*5000;
  temp=(vout1-500)/10;
  gassensor=analogRead(A0);
  if(temp>=80 & gassensor>=100){
    digitalWrite(buzzer,HIGH);
    digitalWrite(LED,HIGH);
  }
  Serial.print("temparature in deg C:");
  Serial.print(" ");
  Serial.print(temp);
  Serial.print("\t");
  Serial.print("gas reading: ");
  Serial.print(gassensor);
  Serial.println();
  delay(100);
}
  
