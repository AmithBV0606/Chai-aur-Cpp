#include <iostream>
#include <string>

using namespace std;

// Abstract class :
class Tea {
    public:
        virtual void prepareIngredients() = 0; // Pure Virtual function
        virtual void brew() = 0;
        virtual void servings() = 0;

        void makeTea(){
            prepareIngredients();
            brew();
            servings();
        }
};

// Derived class 1 :
class GreenTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready!!" << endl;
        }

        void brew() override {
            cout << "Green tea brewed!!" << endl;
        }

        void servings() override {
            cout << "Here is your green tea!!" << endl;
        }
};

// Derived class 2 :
class MasalaTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "Masala and water is ready!!" << endl;
        }

        void brew() override {
            cout << "Masala tea brewed!!" << endl;
        }

        void servings() override {
            cout << "Here is your masala tea!!" << endl;
        }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}