# Encaplsulation 

- Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. 

- In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

- The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

### Analogy : 

- Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. 

- The finance section handles all the financial transactions and keeps records of all the data related to finance. 

- Similarly, the sales section handles all the sales-related activities and keeps records of all the sales. 

- Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month. 

- In this case, he is not allowed to directly access the data of the sales section. 

- He will first have to contact some other officer in the sales section and then request him to give the particular data. 

- This is what encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

# Abstraction

- Data abstraction is one of the most essential and important features of object-oriented programming in C++. 

- Abstraction means displaying only essential information and hiding the details. 

- Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 

### Analogy :

- Consider a real-life example of a man driving a car. 

- The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of an accelerator, brakes, etc. in the car. This is what abstraction is.

- **Abstraction using Classes :** We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not.

- **Abstraction in Header files :** One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.