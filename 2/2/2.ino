void loop() {
  // выключить 8 светодиодов   
  digitalWrite(5, LOW);   
  digitalWrite(6, LOW);   
  digitalWrite(7, LOW);   
  digitalWrite(8, LOW);  
  digitalWrite(9, LOW);   
  digitalWrite(10, LOW);   
  digitalWrite(11, LOW);   
  digitalWrite(12, LOW);  
  // включить 1 светодиод
  digitalWrite(5, HIGH);    
  // пауза 1000 мсек 
  delay(1000);           
  // выключить 8 светодиодов
  …
  // включить 2 светодиод
  digitalWrite(6, HIGH);    
  // пауза 
  delay(1000);           
  // выключить 8 светодиодов
  …
  // включить 3 светодиод
  digitalWrite(7, HIGH);    
  // пауза 
  delay(1000);  
  // выключить 8 светодиодов   
  …
  // включить 4 светодиод
  digitalWrite(8, HIGH);    
  // пауза 1000 мсек 
  delay(1000);           
  // выключить 8 светодиодов   
  …
  // включить 5 светодиод
  digitalWrite(9, HIGH);    
  // пауза 1000 мсек 
  delay(1000);           
  // выключить 8 светодиодов   
  …
  // включить 6 светодиод
  digitalWrite(10, HIGH);    
  // пауза 1000 мсек 
  delay(1000);           
  // выключить 8 светодиодов   
  …
  // включить 7 светодиод
  digitalWrite(11, HIGH);    
  // пауза 1000 мсек 
  delay(1000);           
  // выключить 8 светодиодов   
  …
  // включить 8 светодиод
  digitalWrite(12, HIGH);    
  // пауза 1000 мсек 
  delay(1000);               
}
