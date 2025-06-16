#include "Counter.h"

Counter::Counter(int pin) {
    this->pin = pin;
    pinMode(pin, INPUT);
}

Counter::Counter(int pin, bool inverted) {
    this->pin = pin;
    this->inverted = inverted;
    pinMode(pin, INPUT);
}

Counter::Counter(int pin, bool inverted, bool pullUp) {
    this->pin = pin;
    this->inverted = inverted;
    if (pullUp) {
        pinMode(pin, INPUT_PULLUP);
    } else {
        pinMode(pin, INPUT);
    }
}

void Counter::count() {
    int positiveSignal = inverted ? LOW : HIGH;
    if (digitalRead(pin) != positiveSignal) {
        counted = false;
    } else if (!counted) {
        countVal++;
        counted = true;
    }
}

long Counter::getCount() {
    return countVal;
}
