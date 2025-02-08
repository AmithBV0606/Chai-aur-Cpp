#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Lambda function :
    auto numberOfChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea!!" << endl;
    };

    numberOfChai(5);

    return 0;
}