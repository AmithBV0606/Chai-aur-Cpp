#include <iostream>
using namespace std;

int main()
{
    // Converting from one Data Type to another :
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;

    cout << roundedTeaPrice << endl;

    int teaQuantity = 2;
    // int totalPrice = teaQuantity * teaPrice; // 99
    float totalPrice = teaQuantity * teaPrice; // 99.98

    cout << totalPrice << endl;

    return 0;
}