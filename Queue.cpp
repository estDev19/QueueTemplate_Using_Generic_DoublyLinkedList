//
// Created by esteb on 7/4/2023.
//

#include "Queue.h"

template<class datatype>
Queue<datatype>::Queue() {
    l = new List<datatype>;
    n = 0;
}

template<class datatype>
Queue<datatype>::~Queue() {
    delete l;
    cout<<endl<<"Deleted queue";
}

template<class datatype>
void Queue<datatype>::enqueue(datatype *e) {
    ++n;
    l->addOnTail(e);
}

template<class datatype>
void Queue<datatype>::dequeue(){
    if(empty()) {
        throw QueueEmpty("Failed dequeue, queue is empty");
    }
    else {
        n--;
        l->headRemove();
    }
}

template<class datatype>
datatype *Queue<datatype>::front() const {
    if (empty())
        throw QueueEmpty ("Failed front, queue is empty");
    return l->headValue();
}

template<class datatype>
int Queue<datatype>::size() const {
    return n;
}

template<class datatype>
bool Queue<datatype>::empty() const {
    return n == 0;
}
