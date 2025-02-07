#include <iostream>
#include <string>
using namespace std;

// Challenge: Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.

int main()
{
    string teaTypes[5] = {"Oolaong Tea", "Orange Tea", "Green Tea", "Lemmon Tea", "Black Tea"};

    for (int i = 0; i < 5; i++)
    {
        if (teaTypes[i] == "Green Tea")
        {
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }
     

    return 0;
}