#include "Queue.cpp"
#include "Exception.h"
#include "Client.h"
int main() {
    try {
        Queue<Client> *queue = new Queue<Client>;

        queue->enqueue(new Client("John",27));
        queue->enqueue(new Client("Olivia",35));
        queue->enqueue(new Client("Harry", 17));
        queue->enqueue(new Client("Elizabeth", 40));
        queue->enqueue(new Client("Jack",38));

        cout <<"Queue size: "<< queue->size() << endl;
        cout << "Queue values: " << endl;
        cout << *queue->front();
        queue->dequeue();
        cout << *queue->front();
        queue->dequeue();
        cout << *queue->front();
        queue->dequeue();
        cout << *queue->front();
        queue->dequeue();
        cout << *queue->front();
        queue->dequeue();
        queue->dequeue();   //this deque throws an exception
        delete queue;
    }
    catch (Exception e){
        cout<<endl<<"Exception: "<<e.getMessage();
    }
    return 0;
}
