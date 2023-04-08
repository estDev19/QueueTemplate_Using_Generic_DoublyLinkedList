//
// Created by esteb on 7/4/2023.
//

#ifndef QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_LIST_H
#define QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_LIST_H


#include "Node.cpp"

template<class datatype>
class List {
private:
    Node<datatype> * head;
    Node<datatype> * tail;
public:
    List();
    bool isEmpty();
    datatype * headValue();
    datatype * tailValue();
    void add(Node<datatype> * reference, datatype * value);
    void addOnTail(datatype * value);
    void remove (Node<datatype> * reference);
    void headRemove();
    string toString();
    ~List();
};



#endif //QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_LIST_H
