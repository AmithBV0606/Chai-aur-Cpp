#include <iostream>
#include <string>

using namespace std;

// Base/Parent class :
class Tea
{
protected:
    string teaName;
    int servings;

public:
    // Tea(string name, int serve) : teaName(name) , servings(serve) {
    //     cout << "Tea constructor called!!" << endl;
    // }

    Tea(string name, int serve)
    {
        teaName = name;
        servings = serve;
        cout << "Tea constructor called!!" << endl;
    }

    virtual void brew() const
    {
        cout << "brewing " << teaName << " with generic method!!" << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << servings << " cup of tea with generic method!!" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea desctructor called for " << teaName << endl;
    }
};

// Child class :
class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green Tea constructor called!!" << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea destructor called!" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "Masala Tea constructor called!!" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << endl;
    }

    ~MasalaTea(){
        cout << "Masala Tea destructor called!!" << endl;
    }
};

class SpicyMasalaTea: public MasalaTea {
    public: 
        // void brew() const override{
        //     cout << "Brewing " << teaName << endl;
        // }
};

int main()
{
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}