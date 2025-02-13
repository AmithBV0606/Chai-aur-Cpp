#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve) : teaName(name), servings(serve) {}

    void display() const
    {
        cout << "Tea Name : " << teaName << endl;
    }

    // Getters :
    // int getServings()
    // {
    //     return servings;
    // }

    // Another way of accessing private and protected elements :
    friend bool compareServings(const Chai& chai1, const Chai& chai2);
};

bool compareServings(const Chai& chai1, const Chai& chai2){
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai masalaChai("Masala Chai", 9);
    masalaChai.display();
    // cout << "Tea Cups : " << masalaChai.getServings() << endl;

    Chai gingerChai("Ginger Tea", 13);
    gingerChai.display();

    // Now I want to know which tea has been served the most. So I have to compare the servings of both Masala and Ginger Chai.
    if (compareServings(masalaChai, gingerChai))
    {
        cout << "Masala Chai has MORE number of servings!!" << endl;
    } else {
        cout << "Ginger Chai has MORE number of servings!!" << endl;
    }
    
    return 0;
}