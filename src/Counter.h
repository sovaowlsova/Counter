#ifndef COUNTER_H
#define COUNTER_H

#include <Arduino.h>

class Counter {
    private:
        int pin;
        long countVal;
        bool counted = false, inverted = false;
    public:
        Counter(int pin);
        Counter(int pin, bool inverted);
        Counter(int pin, bool inverted, bool pullUp);
        void count();
        long getCount();
};

#endif
