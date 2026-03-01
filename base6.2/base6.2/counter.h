#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
	int counter{};
public:
	Counter();
	Counter(int counterAsk);

	void addCounter();
	void reduseCounter();
	int checkCounter() const;
};

#endif 

