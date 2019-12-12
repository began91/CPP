#include <iostream>
#include "Cat.h"
#include <sstream>

using namespace std;

int main () {

    Cat cat;
    Cat dog("Jude", 3);
    //cat.happy = true;
    cat.speak();
    cat.makeSad();
    cat.speak();
    std::cout << cat.toString() << endl;
    std::cout << dog.toString() << endl;
    cat.setName("George");
    std::cout << cat.getName() << endl;
    //cat.happy = false;
    cat.makeHappy();
    cat.speak();
    cat.jump();
    
    stringstream ss;
    ss << "String";
    ss << 21;
    std::cout << ss.str() << endl;

    return 0;
}