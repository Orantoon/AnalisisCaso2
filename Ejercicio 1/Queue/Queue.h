#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

template<typename E>
class Queue: public LinkedList<E>{
    public:
        void enqueue(E element){
            LinkedList<E>::append(element);
        }
        E dequeue(){
            return LinkedList<E>::remove();
        }
};
#endif // Queue_H