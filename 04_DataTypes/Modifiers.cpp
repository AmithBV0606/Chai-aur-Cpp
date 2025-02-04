#include <iostream>
using namespace std;

int main()
{
    // If you don't want a number to be negative :
    unsigned int smallTeaPack = 100; // 100

    // unsigned int smallTeaPack = -100; // Prints a random 6-digit value which is a garbage value

    cout << smallTeaPack << endl;

    // Precision :
    // long largeTeaStorage = 1000000; // 1000000
    // long largeTeaStorage = 100000000; // 100000000
    // double largeTeaStorage = 100000000; // 1e+08
    float largeTeaStorage = 100000000; // 1e+08

    cout << largeTeaStorage << endl;

    return 0;
}