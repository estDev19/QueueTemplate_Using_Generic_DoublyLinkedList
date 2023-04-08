//
// Created by esteb on 7/4/2023.
//

#include "Client.h"

Client::Client(const string &name, int age) : name(name), age(age) {}


Client::~Client() {

}

const int &Client::getAge() const {
    return age;
}

const string &Client::getName() const {
    return name;
}

void Client::setAge(const int &age) {
    Client::age = age;
}

void Client::setName(const string &name) {
    Client::name = name;
}

ostream &operator<<(ostream &os, const Client &Client) {
    os << "Name: " << Client.name<< ", age: " << Client.age<<endl;
    return os;
}
