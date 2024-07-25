#include <iostream>
#include <string>
#include "morse.cpp"

using namespace std;

int main(void){
 
    string code;
 
    cout << "Type your morse code here: ";
    code = morseAutomata();
    cout << "Output: " << code << endl;
    
    return 0;
}
