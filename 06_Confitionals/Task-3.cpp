#include <iostream>
#include <string>
using namespace std;

// 3. Nested If-Else :

// Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:

// - More than 20 cups: 20% discount.
// - Between 10 and 20 cups: 10% discount
// - Less than 10 cups: No discount

int main()
{
    int cupsQty;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of cups you've bought : \n";
    cin >> cupsQty;

    if (cupsQty >= 20)
    {
        discount = 0.20;
    }
    else if (cupsQty >= 10 && cupsQty < 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    totalPrice = cupsQty * pricePerCup;
    cout << "Total Price : " << totalPrice << endl;

    totalPrice -= (discount * totalPrice);
    cout << "Total Price after the discount : " << totalPrice << endl;

    return 0;
}