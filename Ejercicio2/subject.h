#include <vector>
#include "strategyObserver.h"

class Subject{
private:
	vector<StrategyObserver*> observers;
	int state;
	
public:
	int getState(){return state;}
	void setState(int pState){
		state = pState;
		notifyObservers();
	}
	
	void attach(StrategyObserver* pObserver){
		observers.push_back(pObserver);
	}
	
	void notifyObservers(){
		for (StrategyObserver* observer : observers){
			observer->update(state);
		}
	}
};
