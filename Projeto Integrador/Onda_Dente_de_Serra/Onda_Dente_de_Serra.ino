int a;
int i=0;

void setup() {
  
   pinMode(5, OUTPUT);
   Serial.begin(9600);

}

void loop() {
  
while (i<256) {
    analogWrite(5,i);
    i=i+1;
    Serial.println(i);
    
    delay(10);
}
i=0;

}
