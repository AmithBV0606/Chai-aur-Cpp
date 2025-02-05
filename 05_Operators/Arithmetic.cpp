#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cupsQty;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups : \n";
    cin >> cupsQty;
    cout << "Enter the price per cups : \n";
    cin >> pricePerCup;

    totalPrice = cupsQty * pricePerCup;

    // Apply 5% discount if the totalPrice is above 100
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - ((5.0 / 100) * totalPrice);
        cout << "Total Price : " << totalPrice << endl;
        cout << "Discounted Price : " << discountedPrice << endl;
    }
    else
    {
        cout << "Total Price : " << totalPrice << endl;
        cout << "'5%' discount if the Total Price is above 100!!" << endl;
    }

    return 0;
}