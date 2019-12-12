#include <iostream>
#include <string>
#include "functions.hpp"

void bleep(std::string const &word, std::string &text) {
    std::size_t pos = text.find(word);;
    while (pos != std::string::npos) { 
        for (int i = 0; i < word.size(); i++) {
            text[pos + i] = '*';
        }
        pos = text.find(word);
    }
}