#include <iostream>

using namespace std;


int main() {
    
    string texts[] = {"one", "two", "three"};

    cout << sizeof(texts)/sizeof(string) << endl;

    string *pTexts = texts;



    for(int i=0; i < sizeof(texts)/sizeof(string); i++) {
        cout << *(pTexts + i) << " " << flush;
    }


    string *pElement = texts;
    string *pEnd = &texts[2];


    return 0;
}