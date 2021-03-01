#include "strategyObserver.h"

class Context{
public:
    StrategyObserver* estrategia;

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
