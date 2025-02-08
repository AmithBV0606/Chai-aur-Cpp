#include <iostream>
#include <string>
using namespace std;

// Call by value
void pourChai(int cups) {
    cups = cups + 5;
    cout << "Poured Chai cups : " << cups << endl;
}

// call by reference
void pourCoffee(int& cups) {
    cups = cups + 5;
    cout << "Poured Coffee cups : " << cups << endl;
}

int main () {
    // Call-by-value
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are (Call-By-Value): " << cups << endl;

    cout << "---------------------------------------------------------------------------" << endl;

    // Call-by-reference
    pourCoffee(cups);
    cout << "Total cups are (Call-By-Reference) : " << cups << endl;
    return 0;
}