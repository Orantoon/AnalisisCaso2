#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

template<typename E>
class Stack: public LinkedList<E>{
    public:
        void Push(E element){
            LinkedList<E>::append(element);
        }
        E Pop(){
            LinkedList<E>::goToPos(LinkedList<E>::getSize()-1);
            return LinkedList<E>::remove();
        }
};
#endif // Stack_H