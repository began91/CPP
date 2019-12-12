#include <iostream>
#include <vector>

int main() {
    std::string input;

    std::cout << "Enter text to convert to Whale: ";
    std::getline (std::cin, input);
    std::cout << input;

    //input = "turpentine and turtles";

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> whale;

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (input[i] == vowels[j]) {
                whale.push_back(input[i]);
            }
        }    
        if (input[i] == 'e' || input[i] == 'u') {
            whale.push_back(input[i]);
        }
    }

    for (int k = 0; k < whale.size(); k++) {
        std::cout << whale[k];
    }

    std::cout << "\n";
}