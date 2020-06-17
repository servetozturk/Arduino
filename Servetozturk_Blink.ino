int led = 9;  //Ledi 9 numaralı çıkışa bağlayacağız.


void setup() {                
  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   // Ledi yak
  delay(1000);               // Bekle
  digitalWrite(led, LOW);    // Ledi söndür
  delay(1000);               // Bekle
}