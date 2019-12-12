//Scissors cuts Paper
//Paper covers Rock
//Rock smashes Lizard
//Lizard poisons Spock
//Spock smashes Scissors
//Scissors decapitates Lizard
//Lizard eats Paper
//Paper disproves Spock
//Spock vaporizes Rock
//Rock crushes Scissors

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

int main() {
    int user, computer;

    srand(time(NULL));

    computer = rand() % 5 + 1; //Random pick 1-5 for computer

    std::cout << "ROCK PAPER SCISSORS LIZARD SPOCK!!\n\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";
    std::cout << "Enter your choice: ";
    //std::cin >> user;
    user = 1;

    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int lizard = 4;
    int spock = 5;
    std::string win = "You win!\n";
    std::string lose = "You lose!\n";
    std::string tie = "You tied!\n";

    std::cout << "\nComputer: " << computer << "   User: " << user << "\n";

    if (user==paper && (computer == spock || computer == rock)) {
        std::cout << win;
    } else if (user == scissors && (computer == lizard || computer == paper)) {
        std::cout << win;
    } else if (user == rock && (computer == lizard || computer == scissors)) {
        std::cout << win;
    } else if (user == spock && (computer == rock || computer == scissors)) {
        std::cout << win;
    } else if (user == lizard && (computer == spock || computer == paper)) {
        std::cout << win;
    } else if (user ==  computer) {
        std::cout << tie;
    } else {
        std::cout << lose;
    }
}