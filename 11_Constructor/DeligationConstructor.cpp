#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Main constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;

        cout << "Main Constructor called!!" << endl;
    }

    // delegating constructor 
    Chai(string name): Chai(name, 2, {"Water", "Milk", "Sugar", "Tea Leaves"}) {}

    void displayChaiDetails()
    {
        cout << "Tea Name : " << teaName << endl;
        cout << "Servings : " << servings << endl;
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
    Chai quickChai("Quick Chai");
    cout << "-----------------------------------------------" << endl;
    quickChai.displayChaiDetails();

    return 0;
}