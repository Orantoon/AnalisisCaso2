#include "subject.h"

class Context{
private:
    StrategyObserver* estrategia;

public:
    Context(StrategyObserver* pEstrategia){
        estrategia = pEstrategia;
    }

    void setStrategy(StrategyObserver* pEstrategia){
        estrategia = pEstrategia;
    }

    void execute(){
        estrategia->play();
    }
};
