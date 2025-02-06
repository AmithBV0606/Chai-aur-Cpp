#include <iostream>
#include <string>
using namespace std;

// 1. If Statement

// Challenge : Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

int main()
{
    string teaName;

    cout << "Which tea would you like to have ? \n";
    getline(cin, teaName);

    if (teaName == "Green Tea")
    {
        cout << "Your Green Tea will be ready in 5 minutes!!\n";
    }

    return 0;
}