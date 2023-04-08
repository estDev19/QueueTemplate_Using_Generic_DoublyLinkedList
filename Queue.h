//
// Created by esteb on 7/4/2023.
//

#ifndef QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_QUEUE_H
#define QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_QUEUE_H

#include "List.cpp"
#include "Exception.h"

template<class datatype>
class Queue {
private:
    List<datatype> * l;
    int n;
public:
    Queue();
    ~Queue();
    void enqueue(datatype *e);
    void dequeue();
    datatype* front() const;
    int size () const;
    bool empty ()const;
};



#endif //QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_QUEUE_H
