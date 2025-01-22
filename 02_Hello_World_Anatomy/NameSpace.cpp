#include <iostream>
using namespace std;

// Another way of using namespace
using std::cout;
using std::endl;

namespace mySpace
{
    void display()
    {
        cout << "Hello, from namespace";
    }
}

int main()
{
    cout << "Hello World";
    // std::cout << "Hello World";
    mySpace::display();
    return 0;
}