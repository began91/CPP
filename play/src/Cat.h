#ifndef CAT_H_
#define CAT_H_

#include <iostream>

using namespace std;

class Cat {

private:
    bool happy;
    string name;
    int age;

public: 
    void makeHappy();
    void makeSad();
    void speak(); 
    void jump();
    string toString();
    void setName(string newName);
    string getName();
    Cat();
    Cat(string newName, int age);
    ~Cat();
};



#endif /* CAT_H_ */