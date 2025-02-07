#include <iostream>
#include <string>
using namespace std;

// Challenge : Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

int main()
{
    string response;

    while (true)
    {
        cout << "Do you wnat some more tea(yes/no) : ";
        cin >> response;

        if (response == "no" || response == "No")
        {
            break;
        }

        cout << "Here is your another cup of tea!! \n";
    }

    cout << "no more tea will be served!! \n";

    return 0;
}