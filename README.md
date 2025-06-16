Библиотека для счётчиков. Пример использования:

```cpp
// Подключаем библиотеку
#include <Counter.h>

// Вызываем конструктор Counter(int pin, int inverted, int pullUp)
Counter sensor(8, true, true);


void setup() {
 // Открываем Serial с baud 9600
 Serial.begin(9600);
}


void loop() {
 // Вызываем счётчик
 sensor.count();
 // Выводим значение счётчика в консоль
 Serial.println(sensor.getCount());
}
```
