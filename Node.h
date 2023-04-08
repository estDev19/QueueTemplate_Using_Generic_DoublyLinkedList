//
// Created by esteb on 7/4/2023.
//

#ifndef QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_NODE_H
#define QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_NODE_H

#include <iostream>
#include <sstream>
using namespace std;

template<class datatype>
class Node {
private:
    datatype * data;
    Node * next;
    Node * previous;
public:
    Node();
    virtual ~Node();
    datatype * getData() const;
    void setData(datatype *data);
    Node *getNext() const;
    void setNext(Node *next);
    Node * getPrevious() const;
    void setPrevious(Node *previous);
};



#endif //QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_NODE_H
