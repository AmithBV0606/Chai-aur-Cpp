#include <iostream>
#include <vector>
#include <string>

using namespace std;
// std::cout; // Used in big code base.

class Chai
{
public:
    string teaName;
    int totalCups;
    vector<string> ingredients;

    // Default constructor
    Chai(){
        // cout << "Constructor called!!!" << endl;
        teaName = "Unknown";
        totalCups = 1;
        ingredients = {"Water", "Tea Leaves"};
        cout << "Constructor called!!!" << endl;
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
    Chai defaultChai;

    defaultChai.displayChaiDetails();

    return 0;
}