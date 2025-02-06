#include <iostream>
#include <string>
using namespace std;

// 4. Switch Case :

// Challenge : Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2

// - Black Tea: $3
// - Oolong Tea: $4

int main()
{
    int choice;

    cout << "Menu : \n"
         << "1. Green Tea\n"
         << "2. Lemon Tea\n"
         << "3. Black Tea\n"
         << endl;

    cout << "Enter your choice (1-3) : \n"
         << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "The price of Green Tea is $5. \n";
        break;

    case 2:
        cout << "The price of Lemon Tea is $10. \n";
        break;

    case 3:
        cout << "The price of Black Tea is $15. \n";
        break;

    default:
        cout << "Please enter the number between 1 and 3!! \n";
        break;
    }

    return 0;
}