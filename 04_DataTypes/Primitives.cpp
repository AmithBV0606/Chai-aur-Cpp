#include <iostream>
using namespace std;

int main()
{
    // Primitive Data Types :

    // Data Types for Numbers : 

    int teaLeaves = 50;
    // int waterTemperature = 90.5; // There will be no error thrown here, but the decimal value will be truncated

    float waterTemperature = 90.5;

    double teaPrice = 299.5676576; // Output : 300
     
    //  Data Types for Strings :

    // char teaGrade = 'A'; // A
    char teaGrade = 'AB'; // B

    cout << teaGrade << endl;

    string teaType = "Green Tea";

    // Data Types for True or False : 

    bool isReady = 5;

    cout << isReady << endl;  // The output is 1, because when we entered int instead of entering the boolean value, Cpp assumes that the user is trying to enter "True".

    // 0 = false
    // 1 = true 

    return 0;
}