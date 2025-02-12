# C++ Getters and Setters

- In C++, getters and setters are part of data encapsulation used to protect our data, particularly when creating classes. 

- These are public methods that are used to access and modify the private or protected members of a class.

### Getters in C++ : 

In C++, getters, also known as accessors (as they access the value), are the public member functions that are used to fetch private member's values. In general, the getter starts with the word “get” followed by the variable name.

**Syntax to Define Getter :**

```
dataType getVariableName() const { 
    return variableName;
 }
```

### Setters in C++ :

Setters, also known as mutators (as they update the value), are also the public member functions that set the value of a private member variable. In general, the setter starts with the word “set” followed by the variable name.

**Syntax to Define Setter :**

```
void setVariableName(dataType newValue) { 
    variableName = newValue;
}
```