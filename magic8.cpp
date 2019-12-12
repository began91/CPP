#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "MAGIC 8-BALL:\n";
    srand(time(NULL));
    int answer = std::rand() % 10;

    switch (answer) {
        case 0 : 
            std::cout << "It is certain.\n";
            break;
        case 1 : 
            std::cout << "It is decidedly so.\n";
            break;
        case 2 : 
            std::cout << "Without a doubt.\n";
            break;
        case 3 : 
            std::cout << "My sources say no.\n";
            break;
        case 4 : 
            std::cout << "Ask again later.\n";
            break;
        case 5 : 
            std::cout << "As I see it, yes.\n";
            break;
        case 6 : 
            std::cout << "Outlook good.\n";
            break;
        case 7 : 
            std::cout << "Reply hazy, try again.\n";
            break;
        case 8 : 
            std::cout << "Cannot predict now.\n";
            break;
        case 9 : 
            std::cout << "My reply is no.\n";
            break;
        default:
            std::cout << "Very doubtful.\n";
            break;
    }

   /*
    It is decidedly so.
    
    Yes - definitely.
    You may rely on it.
    
    Most likely.
    
    Yes.
    Signs point to yes.
    
    
    Better not tell you now.
    
    Concentrate and ask again.
    Don't count on it.
    
    
    Outlook not so good.
    */




}