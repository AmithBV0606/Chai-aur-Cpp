#include <iostream>
#include <string>
using namespace std;

// 2. If-Else Statement

// Challenge : Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

int main()
{
    int hour;

    cout << "Enter the time right now (0 - 23): \n";
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "The tea shop is OPEN!!";
    } else {
        cout << "The tea shop is CLOSED !!";
    }
    

    return 0;
}