#define SENSOR 7 
#define ACTION 2 

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR, INPUT_PULLUP);
  pinMode(ACTION, OUTPUT);
}

void loop() {
  int L = digitalRead(SENSOR);
  if(L == 0){
     digitalWrite(ACTION,HIGH)
  } else{
     digitalWrite(ACTION,LOW);
  }
  delay(200);
}
