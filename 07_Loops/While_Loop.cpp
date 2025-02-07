#include <iostream>
#include <string>
using namespace std;

// Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

int main()
{
    int cups;

    cout << "Enter the number of tea cups to serve : \n";
    cin >> cups;

    while (cups > 0)
    {
        cups--;
        cout << "Serving cup of tea  \n" << cups << " remaining!!" << endl;
    }

    cout << "All tea cups has been served!!" << endl;

    return 0;
}