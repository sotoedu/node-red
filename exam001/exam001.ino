
#define LED 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  //아두이노에 랜덤한값을 가지는 센서가 3개가있다!
  int sensor1 = random(0, 1023);
  int sensor2 = random(0, 1023);
  int sensor3 = random(0, 1023);

  if(Serial.available()){
    //readline
    char c = Serial.read();
    if(c == '0'){
      digitalWrite(LED,LOW);
    }else if(c == '1'){
      digitalWrite(LED,HIGH);
    }
  }

  Serial.println("{\"sensor1\":\""+String(sensor1)+"\",\"sensor2\":\""+String(sensor2)+"\",\"sensor3\":\""+String(sensor3)+"\"}");
  delay(1000);
}
