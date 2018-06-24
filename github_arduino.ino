// ArduinoのスケッチをGithubで管理するテスト
int led =2; // D1 onboard led 

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  // 1
  // 2
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
