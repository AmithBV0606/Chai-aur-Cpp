#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cupsQty;

    cout << "Enter the number of cups you've bought so far : \n";
    cin >> cupsQty;

    if (cupsQty > 20)
    {
        cout << "You will receie a GOLD badge!!\n";
    }
    else if (cupsQty >= 10 && cupsQty <= 20)
    {
        cout << "You will receie a SILVER badge!!\n";
    }
    else
    {
        cout << "No badge for you!!" << endl;
    }

    return 0;
}