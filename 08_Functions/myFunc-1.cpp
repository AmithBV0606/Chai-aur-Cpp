#include <iostream>
#include <string>
using namespace std;

int checkTemperature (int temp) {
    return temp;
}

// declaration of function 
void serveChai(int cups);

// function definition
void serveChai(int cups){
    cout << "Serving " << cups << " of Chai!!!" << endl;
}

// Types of parameters :
// 1) default parameters
// 2) formal parameters
// 3) Actual parameters

// Function Overloading : 
void serveChai(string teaName = "Masala Chai"){ // default parameters
    int score = 100; // formal parameters
    cout << "Serving " << teaName << " ...." << endl;
}

int main () {
    int temperature = checkTemperature(30);
    cout << "Temperature : " << temperature << endl;

    serveChai(3);
    serveChai("Lemon tea"); // Actual parameters
    serveChai();
    return 0;
}