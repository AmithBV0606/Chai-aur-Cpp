#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai
{
    // data members (attributes)
public:                         // Access modifiers
    string teaName;                // Name of the tea.
    int totalCups;              // Number of servings.
    vector<string> ingredients; // List of ingredients for the tea.

    // Member functions
    void displayChaiDetails()
    {
        cout << "Tea Name : " << teaName << endl;
        cout << "Servings : " << totalCups << endl;
        cout << "Ingredients : ";

        // Specialized loop for Array/Vector :
        for (string element : ingredients)
        {
            cout << element << ", ";
        }

        cout << endl;
    }
};

int main()
{
    // Object one, created using "Chai" Class :
    Chai chaiOne;

    chaiOne.teaName = "lemon Tea";
    chaiOne.totalCups = 5;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "Tea Leaves"};

    chaiOne.displayChaiDetails();

    // Object two, created using "Chai" Class :
    Chai chaiTwo;

    chaiTwo.teaName = "Masala Tea";
    chaiTwo.totalCups = 2;
    chaiTwo.ingredients = {"Milk", "Masala", "Tea Leaves"};

    chaiTwo.displayChaiDetails();

    return 0;
}