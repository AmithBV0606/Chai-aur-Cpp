#include <iostream>
#include <string>
using namespace std;

// Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

int main()
{
    int teaCups = 5;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing " << i << "th cup of tea...." << endl;
    }

    cout << "Outside of loop!!";
    
    return 0;
}