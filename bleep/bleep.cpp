#include <iostream>
#include <string>
#include "functions.hpp"

int main() {
    std::string const word = "occo";
    std::string text = "When Abby eats broccoli she gets the broccoli farts.";
    bleep(word, text);
    std::cout << text << "\n";
}