#include <iostream>
#include <string>
using namespace std;

int main(){
    int temp[5] = {85, 88, 92, 94, 95};

    // for (int i = 1; i <= 5; i++) // the last value will be filled with garbage value
    for (int i = 0; i < 5; i++)
    {
        cout << temp[i] << " degree C \n";
    }

    int chaiServed[5] = {50, 60, 70, 80, 90};

    cout << "Chai cups served on Day 1 : " << chaiServed[0] << endl;
    cout << "Chai cups served on Day 2 : " << chaiServed[1] << endl;
    cout << "Chai cups served on Day 3 : " << chaiServed[2] << endl;
    cout << "Chai cups served on Day 4 : " << chaiServed[3] << endl;
    cout << "Chai cups served on Day 5 : " << chaiServed[4] << endl;
    
    return 0;
}