#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int cups;
    vector<string> ingredients;

public:
    // Default constructor :
    Chai()
    {
        teaName = "Unknown";
        cups = 1;
        ingredients = {"Water", "Tea Leaves"};
    }

    // Parameterized constructor :
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        cups = serve;
        ingredients = ingr;
    }

    // Getter for Tea Name :
    string getTeaName()
    {
        return teaName;
    }

    // Setters for Tea Name :
    void setTeaName(string name)
    {
        // Actual logic
        teaName = name;
    }

    // Getters for cups :
    int getCups()
    {
        return cups;
    }

    // Setters for cups :
    void setCups(int serve)
    {
        cups = serve;
    }

    // Getters for ingredients :
    vector<string> getIngredients()
    {
        return ingredients;
    }

    // Setters for ingredients :
    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name : " << teaName << endl;
        cout << "Servings : " << cups << endl;
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
    Chai chai;

    // Getting and Setting Tea Name :
    chai.setTeaName("Ginger Tea");
    string nameOfTea = chai.getTeaName();
    cout << "Name of tea : " << nameOfTea << endl;

    // Getting and Setting Cups :
    chai.setCups(5);
    int numOfCups = chai.getCups();
    cout << "Total cups : " << numOfCups << endl;

    // Getting and Setting Ingredients :
    chai.setIngredients({"Water", "Ginger", "Tea Leaves", "Honey"});
    vector<string> allIngredients = chai.getIngredients();
    for (int i = 0; i < allIngredients.size(); i++)
    {
        cout << "Ingredients used : " << allIngredients[i] << endl;
    }

    cout << "------------------------------------------------------" << endl;

    // Displaying all changes together : 
    chai.displayChaiDetails(); 

    return 0;
}