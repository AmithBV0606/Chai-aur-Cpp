#include <iostream>
#include <string>
using namespace std;

// Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

int main()
{
    string wantTea;

    do
    {
        cout << "Do you want to have some more tea(Yes/No) ? \n";
        cin >> wantTea;
    } while (wantTea != "no");

    cout << "Thank you for visiting our shop!!";

    return 0;
}