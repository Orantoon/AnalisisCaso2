#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdexcept>
#include <iostream>
#include "List.h"
#include "Node.h"

using std::runtime_error;
using namespace std;

template<typename E>
class LinkedList: public List<E>{
protected:
    Node<E> *head;
    Node<E> *current;
    Node<E> *tail;
    int size;

public:
    LinkedList(){
        current = tail = head = new Node<E>();
        size = 0;
    }
    ~LinkedList(){
         clear();
         delete head;
    }
    virtual void append(E element){ //Inserta en la ultima posicion
        tail->next = new Node<E>(element);
        tail = tail->next;
        size++;
    }
    void insert(E element){ //Inserta en la posicion de current
        current -> next =  new Node<E>(element, current->next);
        size++;
        if (current == tail){
            tail = tail -> next;
        }
    }
    virtual E remove(){
        if (size == 0){
            throw runtime_error("List is empty");
        }
        if (current == tail){
            throw runtime_error("No current element");
        }
        E res = current -> next-> element;
        Node<E> *temp = current-> next;
        current-> next = temp-> next;
        delete temp;
        if (current -> next == nullptr){
            tail == current;
        }
        size--;
        return res;
    }
    void clear() {
        while (head -> next != nullptr){
            current = head -> next;
            head -> next = current -> next;
            delete current;
        }
        current = tail = head;
        size = 0;
    }
    E getElement(){
        if (size == 0){
            throw runtime_error("List is empty");
        }
        if (current -> next == nullptr){
            throw runtime_error ("No current element");
        }
        return current->next->element;
    }
    void goToStart(){
        current = head;
    }
    void goToEnd(){
        current = tail;
    }
    void goToPos(int pos){
        if (pos > size){
            throw runtime_error("Index out of range");
        }
        goToStart();
        for (int x=0; x < pos; x++){
            current = current -> next;
        }
    }
    void next(){
        if (current !=head){
            current = current -> next;
        }
    }
    void previous(){
        if (current != head){
            Node<E> *temp = head;
            while (temp -> next != current){
                temp = temp -> next;
            }
            current = temp;
        }
    }
    bool atStart(){
        return current == head;
    }
    bool atEnd(){
        return current == tail;
    }
    int getPos(){
        int pos = 0;
        Node<E> *temp = head;
        while (temp != current){
            temp = temp -> next;
            pos++;
        }
        return pos;
    }
    int getSize(){
        return size;
    }
    void print(){
        Node <E> *temp = head;
        while (temp -> next!= nullptr){
            cout << temp -> next -> element << " ";
            temp= temp -> next;
        }
        cout << endl;
    }
};

#endif // LINKEDLIST_H
