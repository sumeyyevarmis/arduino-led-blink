int a = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,1);
  delay(50);
  digitalWrite(2,0);
  delay(50);
  a++;
  if(a>5){
    digitalWrite(3,1);
  }
  if(a>10){
    a=0;
    digitalWrite(3,0);
  }
}
