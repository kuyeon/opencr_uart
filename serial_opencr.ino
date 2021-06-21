int LED = 13;

void setup() {
  Serial.begin(115200);
  //Serial1.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  char Data = Serial.read();
  if(Data == '1'){
    digitalWrite(LED, LOW);
    //Serial1.print('0');
    //delay(1000);
  }
  else if(Data == '0'){
    digitalWrite(LED, HIGH);
    //Serial1.print('1');
    //delay(1000);
  }
  else{
    Serial.print("a\n");
    delay(1000);
  }
}
