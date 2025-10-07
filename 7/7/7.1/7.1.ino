// Контакт 13 для подключения светодиода
int LED=13;
// Контакт 2 для подключения кнопки
int BUTTON=2;
// Переменная для сохранения предыдущего состояния кнопки 
boolean lastButton = LOW;
// Переменная для сохранения текущего состояния кнопки 
boolean currentButton = LOW;
// Текущее состояние светодиода (включен/выключен) 
boolean ledon = false;
void setup() {
// запуск последовательного порта 
Serial.begin(9600);
// Сконфигурировать контакт светодиода как выход 
pinMode (LED, OUTPUT);
// Сконфигурировать контакт кнопки как вход
pinMode (BUTTON, INPUT);
}
void loop() {
currentButton = debounce (lastButton); 
// если нажатие...
if (lastButton == LOW && currentButton == HIGH)
{
// инвертировать значение состояния светодиода 
ledon = !ledon;
Serial.println(ledon);
}
lastButton = currentButton;
// изменить статус состояния светодиода
digitalWrite(LED, ledOn);
}
// Функция сглаживания дребезга
// Принимает в качестве аргумента предыдущее состояние кнопки, 
// выдает фактическое.
boolean debounce (boolean last) {
// Считать состояние кнопки
boolean current = digitalRead(BUTTON);
// если изменилось...
if (last != current)
{
// ждем 5 мс
delay(5);
// считываем состояние кнопки
current = digitalRead(BUTTON);
// возвращаем состояние кнопки
return current;
}
}
