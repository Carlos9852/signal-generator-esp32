int a;
int i=0;

void setup() {
  
   pinMode(5, OUTPUT);
   Serial.begin(9600);

}

void loop() {
  
while (i<1024) {
    digitalWrite(5,i);
    i=i+1;
    delay(10);
}
i=0;

}
