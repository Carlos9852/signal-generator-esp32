

#define  saida  5

float tempo;
void setup() 
{
   pinMode(saida, OUTPUT);
   Serial.begin(9600);

}

void loop() 
{
tempo= (map(analogRead(A0),0,1023,1,52));
digitalWrite(saida,HIGH);
delay(tempo);
digitalWrite(saida,LOW);
delay(tempo);

}

//////// Com esse código a frequência varia de 9.6Hz até 458Hz /////// 
