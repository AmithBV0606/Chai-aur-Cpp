#include <iostream>
#include <string>
using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[5] = {85, 88, 92, 94, 95};

    int total = totalChaiServed(chaiServed, 5);
    cout << "Total Chai Served : " << total << endl;
    
    return 0;
}

// Note : A function cannot return any array in Cpp by default. 