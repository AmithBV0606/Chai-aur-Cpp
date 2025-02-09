#include <iostream>
#include <string>
using namespace std;

int main()
{
    int chaiSales[3][7] = {
        {25, 30, 35, 40, 45, 50, 55}, // Shop 1 sales for 7 days
        {60, 65, 70, 75, 80, 85, 90}, // Shop 2 sales for 7 days
        {30, 40, 50, 60, 70, 80, 90}, // Shop 3 sales for 7 days
    };

    // "For" loop for rows :
    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop " << i + 1 << endl;

        // "For" loop for columns :
        for (int j = 0; j < 7; j++)
        {
            cout << "Chai sales at day " << j + 1 << " is : " << chaiSales[i][j] << endl;
        }
    }

    return 0;
}