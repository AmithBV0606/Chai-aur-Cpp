#include <iostream>
#include <string>
using namespace std;

// Pointers and dynamic memory: 

int* prepareChaiOrders(int cups) {
    // Dynamic memory allocation(Heap memeory) : 
    int* orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

// Note : When prepareChaiOrders function is called it returs a pointer which holds the reference to the first element of the array

// Whenever the new keyword is used we need to clean-up the memory in the end. 

int main(){
    int cups = 5;
    int* totalChai = prepareChaiOrders(cups);

    // cout << totalChai << endl; // 0x14c605fc0 : Address to the first element of the Array!!
    cout << *totalChai << endl; // 10

    for (int i = 0; i < cups; i++)
    {
        cout << "Order " << i + 1 << " : " << totalChai[i] << " cups" << endl; 
    }

    // Clean up the the Heap(dynamic) memory : This also aviods memory leaks
    delete[] totalChai;
    
    return 0;
}