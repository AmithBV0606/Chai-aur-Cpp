# Functions

### Parameters : 

The values which are defined at the time of the function prototype or definition of the function are called as parameters.

```cpp
int Call(int rnum)
{
	printf("the num is %d", rnum);
}

// rnum is parameter
```

### Arguements :

When a function is called, the values that are passed during the call are called as arguments.

```cpp
int num = 20;
Call(num)

// num is argument
```

### Function overloading :

- Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.

- When a function name is overloaded with different jobs it is called Function Overloading.

```cpp
#include <iostream>
using namespace std;

void add(int a, int b)
{
  cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);

    return 0;
}
```

### Parameter Passing Techniques in C++ : 

There are 3 different methods using which we can pass parameters to a function in C++. These are:

1. **Pass by Value** : 

- In Pass by Value method, a variable's actual value is copied and then passed to the function instead of the original variable. 

- As the result, any changes to the parameter inside the function will not affect the variable's original value outside the function.

- Althogh it is easy to understand and implement, this method is not so useful for large size of data structures at it involves copying the value.

```cpp
#include <iostream>
#include <string>
using namespace std;

// function to swap variables
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    cout << "Before Swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    // Call the 'swap' function with pass-by-value parameters
    swap(x, y);

    // Print the values of 'x' and 'y' after the
    // (ineffective) swap The values remain unchanged
    // because the function works on copies.
    cout << "After Swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
```

**Output :**

```
Before Swapping:
x = 5, y = 10
After Swapping:
x = 5, y = 10
```

2. **Pass by Reference** : 

- In pass-by-reference method, instead of passing the argument itself, we passes the reference of an argument to the function. This allows the function to change the value of the original argument.

- Any changes we make to your argument inside your function are reflected in your original argument so we have to be careful while handling data in this method.

```cpp
#include <iostream>
using namespace std;

// function to swap variables
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// driver code
int main()
{
    int x = 5;
    int y = 10;
    cout << "Before swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;

    // Call the 'swap' function with pass-by-reference
    // parameters Values of 'x' and 'y' are modified in the
    // calling code because references are used.
    swap(x, y);

    cout << "After swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;
    return 0;
}
```

3. Pass by Pointers

### Scope of a variable : 

```cpp
#include <iostream>
using namespace std;

int age = 24; // Global Variable : Can be directly accessed by any function inside any function

void test() {
    int num = 100; //Local Variable: Cannot be assessed outside of this scope
}

int main () {
    cout << "My age is " << age << endl; 
    return 0;
}
```