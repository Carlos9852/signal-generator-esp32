int x = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
  for(int i = 0; i < 256; i++){
    x = i;
    Serial.println(x);
  }
  for(int i = 255; i >= 0; i--){
    x = i;
    Serial.println(x);
  }
}
