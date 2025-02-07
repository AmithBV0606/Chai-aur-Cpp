#include <iostream>
#include <string>
using namespace std;

// Challenge: Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.

int main()
{
    string teaTypes[5] = {"Oolaong Tea", "Orange Tea", "Green Tea", "Lemmon Tea", "Black Tea"};

    for (int i = 0; i < 5; i++)
    {
        cout << "Brewing " << teaTypes[i] << "..." << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "   --->>Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }

    return 0;
}