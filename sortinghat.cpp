#include <iostream>

int main() {
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
    int answer1, answer2, answer3, answer4;
    
    std::cout << "The Sorting Hat Quiz!\n";
    //Question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";
    std::cin >> answer1;

    switch (answer1) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 4:
            gryffindor++;
            break;
        case 3:
            ravenclaw++;
            break;
        default:
            std::cout << "Invalid response";
            break;
    }

        //Question 2
    std::cout << "Q2) Dawn or Dusk:\n\n";

    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";
    std::cin >> answer2;

    switch (answer2) {
        case 1:
            gryffindor++;
            ravenclaw++;
            break;
        case 2:
            slytherin++;
            hufflepuff++;
            break;
        default:
            std::cout << "Invalid response";
            break;
    }

        //Question 3
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";
    std::cin >> answer3;

    switch (answer3) {
        case 2:
            hufflepuff++;
            break;
        case 1:
            slytherin++;
            break;
        case 4:
            gryffindor++;
            break;
        case 3:
            ravenclaw++;
            break;
        default:
            std::cout << "Invalid response";
            break;
    }

            //Question 4
    std::cout << "Q4) Which road tempts you most?\n\n";

    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";
    std::cin >> answer4;

    switch (answer4) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            std::cout << "Invalid response";
            break;
    }

    std::string house;
    int max = 0;

    if (gryffindor > max) {
        house = "Gryffindor";
        max = gryffindor;
    }

    if (slytherin > max) {
        house = "Slytherin";
        max = slytherin;
    }
    if (hufflepuff > max) {
        house = "Hufflepuff";
        max = hufflepuff;
    }
    if (ravenclaw > max) {
        house = "Ravenclaw";
        max = ravenclaw;
    }

    std::cout << "You are a " << house << "\n";
}