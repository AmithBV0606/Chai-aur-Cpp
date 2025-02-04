#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaName = "Lemon Tea";

    cout << teaName << endl;

    // Escape sequence characters : 
    string coffeeName = "Ice Chocolate coffee \n";
    string desciption = "Known\tas the \"best\" coffee"; // Escape character

    cout << coffeeName << desciption << endl;

    return 0;
}