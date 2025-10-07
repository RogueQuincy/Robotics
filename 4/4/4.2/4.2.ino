// массив контактов подключения светодиодов шкалы
int leds[] = {13,12,11,10,9,8,7,6,5,4};
// количество горящих светодиодов
int n=0;

void setup() {
   // настроить выводы Arduino как OUTPUT
   for (int i=0;i < 10; i=i+1) { 
      pinMode(leds[i],OUTPUT);
   }
}

void loop() {
  // выключить n светодиодов   
   for (int i=0;i<10; i=i+1) {
      if(i<n)
         {digitalWrite(leds[i],HIGH);}
      else
         {digitalWrite(leds[i],LOW);}
   }
  // изменить n - приращение на 1
  // и остаток от деления на 11 (после 10 -> 0)
  n=(n+1)%11;       
}
