void rampa(int freq);
void triangular(int freq);
void quadrada(int freq);
void sineWavw(int freq);

int f = 100;

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  rampa(f);
  //triangular(f);
  //quadrada(f);
  //ineWave(f);

  
  
  
}
void rampa(int freq){
  float frequencia;

  frequencia = (1.0/freq) * 1000000.0;
  
  for(int i = 0; i<256; i++){
    dacWrite(26, i);
    delayMicroseconds(frequencia / 256.0); 
  }
}

void triangular(int freq){
  float frequencia;

  frequencia = (1.0/freq) * 1000000.0;
  
  for(int i = 127; i < 255;i++){
    dacWrite(26, i);
    delayMicroseconds(frequencia/128.0); 
  }
  for(int i = 255; i >= 127;i--){
    dacWrite(26, i);
    delayMicroseconds(frequencia/128.0); 
  }
  
  for(int i = 126; i>= 0;i--){
    dacWrite(26, i);
    delayMicroseconds(frequencia/128.0); 
  }

  for(int i = 1; i<= 126;i++){
    dacWrite(26, i);
    delayMicroseconds(frequencia/128.0); 
  }
  Serial.println(frequencia);
}

void quadrada(int freq){
  float frequencia;

  frequencia = 1.0/freq * 1000.0; 
  dacWrite(26, 255);
  delay(frequencia/2);
  dacWrite(26, 0);
  delay(frequencia/2);
  Serial.println(frequencia);
}

void sineWave(int freq){
  static int sine = 0;
  for(int i=0; i<360; i++){
    sine = 127 + (127*(sin(i*(PI/180))));
    dacWrite(26, sine);
  }
}
