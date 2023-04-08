//
// Created by esteb on 7/4/2023.
//

#ifndef QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_CLIENT_H
#define QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_CLIENT_H

#include <iostream>
#include <sstream>
using namespace std;

class Client {
private:
    string name;
    int age;
public:
    Client(const string &name, int age);
    virtual ~Client();
    const int &getAge() const;
    const string &getName() const;
    void setAge(const int &age);
    void setName(const string &name);
    friend ostream &operator<<(ostream &os, const Client &Client);
};

#endif //QUEUE_TEMPLATE_USING_GENERIC_DOUBLE_LIST_CLIENT_H
