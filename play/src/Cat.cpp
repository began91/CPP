#include <iostream>
#include <sstream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
    std::cout << "Cat Created" << endl;
    //explicit initialization
    name = "undefined";
    age = 0;
    happy = true;
}

Cat::Cat(string name, int age): name(name), age(age) { 
    //constructor initialization list
    //this->name = name;
    //this->age = age;
    happy = true; 
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << endl;
}

string Cat::toString() {
    stringstream ss;

    ss << name;
    ss << " ";
    ss << age;
    ss << " ";
    ss << happy;

    return ss.str();
}

void Cat::setName(string newName) {
    name = newName;
}

string Cat::getName() {
    return "Name of persone with get is " + name;
}

void Cat::speak() {
    if(happy) {
        std::cout << "MEOOUWWW" << endl;
    } else {
        std::cout << "sad cat" << endl;
    }
}

void Cat::jump() {
    std::cout << "Jumping to the top of the bookcase" << endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}