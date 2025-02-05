#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isStudent;
    cout << "Are you a student (1 for Yes and 0 for No) ? \n";
    cin >> isStudent;

    int cupsQty;
    cout << "How many cups have you purchased ?\n";
    cin >> cupsQty;

    if (isStudent || cupsQty > 15)
    {
        cout << "You are eligible for discount!!";
    }
    else
    {
        cout << "You are NOT eligible for discount!!";
    }

    return 0;
}