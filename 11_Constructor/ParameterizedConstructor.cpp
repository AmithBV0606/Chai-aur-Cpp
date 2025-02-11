#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai
{
public:
    string teaName;
    int totalCups;
    vector<string> ingredients;

    // Parameterized constructor
    Chai(string name, int cups, vector<string> ingr)
    {
        teaName = name;
        totalCups = cups;
        ingredients = ingr;
        cout << "Parameterized constructor called!!!" << endl;
    }

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
    Chai defaultChai("Lemon Tea", 2, {"Water", "Tea Leaves"});

    defaultChai.displayChaiDetails();

    return 0;
}