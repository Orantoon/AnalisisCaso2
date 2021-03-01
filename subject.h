#include <vector>
#include "strategyObserver.h"

class Subject{
private:
	vector<StrategyObserver*> observers;
	int state;
	
public:
	int getState(){return state;}
	void setState(int _state){
		state = _state;
		notifyObservers();
	}
	
	void attach(StrategyObserver* observer){
		observers.push_back(observer);
	}
	
	void notifyObservers(){
		for (StrategyObserver* observer : observers){
			observer->update(state);
		}
	}
};
