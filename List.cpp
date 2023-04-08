//
// Created by esteb on 7/4/2023.
//

#include "List.h"

template<class datatype>
List<datatype>::~List() {
    Node<datatype>* point = head;
    while(point != tail){
        point = point->getNext();
        if(point != nullptr){
            point->setPrevious(head->getPrevious());
        }
        delete head;
        head = point;
    }
}

template<class datatype>
List<datatype>::List() {
    this->head = new Node<datatype>;
    this->tail = new Node<datatype>;
    head->setNext(tail);
    tail->setPrevious(head);
}

template<class datatype>
bool List<datatype>::isEmpty() {
    return (head->getNext() == tail);
}

template<class datatype>
datatype *List<datatype>::headValue() {
    Node<datatype> * temp = head->getNext();
    if(temp == nullptr){
        return nullptr;
    }
    return temp->getData();
}

template<class datatype>
datatype *List<datatype>::tailValue() {
    Node<datatype> * temp = tail->getNext();
    if(temp == nullptr) {
        return nullptr;
    }
    return temp->getData();
}

template<class datatype>
void List<datatype>::add(Node<datatype> *reference, datatype *value) {
    Node<datatype> * _new = new Node<datatype>();
    _new->setData(value);
    _new->setNext(reference);
    _new->setPrevious(reference->getPrevious());
    reference->getPrevious()->setNext(_new);
    reference->setPrevious(_new);
}

template<class datatype>
void List<datatype>::addOnTail(datatype *value) {
    add(tail, value);
}

template<class datatype>
void List<datatype>::remove(Node<datatype> *reference) {
    Node<datatype> * prev = reference->getPrevious();
    Node<datatype> * nxt = reference->getNext();
    prev->setNext(nxt);
    nxt->setPrevious(prev);
    delete reference;
}

template<class datatype>
void List<datatype>::headRemove() {
    remove(head->getNext());
}

template<class datatype>
string List<datatype>::toString() {
    stringstream ss;
    Node<datatype> * temp = head->getNext();
    if(temp == tail){
        ss<<"Empty list!"<<endl;
    }else{
        ss<<"NULL<->";
        while(temp != tail){
            ss<< * temp->getData()<<"<->";
            temp = temp->getNext();
        }
        ss<<"NULL"<<endl;
    }
    return ss.str();
}
