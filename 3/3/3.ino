int t=500;
void loop() {
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 1 светодиод
  digitalWrite(LED1, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 2 светодиод
  digitalWrite(LED2, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 3 светодиод
  digitalWrite(LED3, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 4 светодиод
  digitalWrite(LED4, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 5 светодиод
  digitalWrite(LED5, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 6 светодиод
  digitalWrite(LED6, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 7 светодиод
  digitalWrite(LED7, HIGH);    
  // пауза  
  delay(t);           
  // выключить 8 светодиодов   
  ledsOff();  
  // включить 8 светодиод
  digitalWrite(LED8, HIGH);    
  // пауза 
  delay(t);  
  t=t+100;         
}
