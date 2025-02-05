#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaBagsQty;

    cout << "Enter the number of tea bags : \n";
    cin >> teaBagsQty;

    if (teaBagsQty < 10)
    {
        teaBagsQty += 5;
        cout << "Since you have less than 10 tea bags we're giving you 5 more tea bags! Now you have " << teaBagsQty << " tea bags in total!!" << endl;
    }
    else
    {
        cout << "You have " << teaBagsQty << " tea bags!!" << endl;
    }

    return 0;
}