// Контакт 13 для подключения светодиода
int LED=13;
// Контакт 2 для подключения кнопки
int BUTTON=2;
// переменная статуса кнопки buttonState 
boolean buttonState;
// переменная статуса кнопки предыдущая 
boolean buttonStatePrev=LOW;
// переменная статуса светодиода 
boolean ledState=LOW;
void setup() {
// запуск последовательного порта 
Serial.begin(9600);
// определяем вывод LED (светодиод) как выход 
pinMode (LED, OUTPUT);
// определяем вывод BUTTON (кнопка) как вход 
pinMode (BUTTON, INPUT_PULLUP);
// начальное состояние светодиода 
digitalWrite(LED, ledState);
}
void loop() {
// считываем состояние BUTTON входа (кнопки) 
buttonState = digitalRead(BUTTON);
// если нажатие с LOW на HIGH
if (buttonState == HIGH && buttonStatePrev==LOW) { 
ledState = ! ledState;
// записываем состояние из ledState на выход LED 
digitalWrite(LED, ledState); 
Serial.println(ledState);
}
buttonStatePrev = buttonState;
}
