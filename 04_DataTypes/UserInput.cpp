#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teaName;
    int teaQty;

    cout << "What would you like to order in tea? \n";
    getline(cin, teaName);

    cout << "How many cups of " << teaName << " would you like to have? \n";
    cin >> teaQty;

    cout << "Tea : " << teaName << endl;
    cout << "QTY : " << teaQty << endl;

    return 0;
}