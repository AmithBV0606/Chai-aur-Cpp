#include <iostream>
using namespace std;

// Another way of using namespace
using std::cout;
using std::endl;

// Custom namespace :
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
    // std::cout << "Hello World"; // When "using namespace std" is not written at the top
    mySpace::display();
    return 0;
}