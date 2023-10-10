const int trigger = 2; 
const int echo = 3; 
const int Buzz = 7; 


long time_taken;
int dist;
int safed;

void setup() {
Serial.begin(9600); 
pinMode(Buzz,OUTPUT);
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT); 


pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
}



void loop() { 
digitalWrite(trigger, LOW);
delayMicroseconds(2);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);

time_taken = pulseIn(echo, HIGH);
dist= time_taken*0.034/2;

Serial.print("Distance : ");
Serial.print(dist);
Serial.println(" cm ");


safed = dist;
if (safed < 40 && safed >= 5){
  digitalWrite(Buzz, HIGH);
  delay(200);
  digitalWrite(Buzz, LOW);
  delay(250);
}
else if (safed < 75 && safed >=40){
  digitalWrite(Buzz, HIGH);
  delay(400);
  digitalWrite(Buzz, LOW);
  delay(600);
}
  else if (safed < 100 && safed >= 75){
  digitalWrite(Buzz, HIGH);
  delay(700);
  digitalWrite(Buzz, LOW);
  delay(1000);
}
  else{
  digitalWrite(Buzz, HIGH);
}
}