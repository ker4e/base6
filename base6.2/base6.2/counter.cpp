#include "counter.h"

Counter::Counter() : counter{ 1 }
{}
Counter::Counter(int counterAsk) : counter{ counterAsk }
{}
void Counter::addCounter() { ++counter; }
void Counter::reduseCounter() { --counter; }
int Counter::checkCounter() const { return counter; }