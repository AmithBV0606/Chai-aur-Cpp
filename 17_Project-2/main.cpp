#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmploye(const Employee &emp)
{
    cout << "ID : " << emp.id << endl;
    cout << "Name : " << emp.name << endl;
    cout << "Salary : " << emp.salary << endl;
    cout << "--------------------------------------" << endl;
}

int main()
{
    vector<Employee> employees = {
        {101, "Amith", 100000},
        {102, "Vikram", 100000},
        {103, "Parth", 50000},
        {104, "Vikranth", 40000},
        {105, "Virat", 60000},
    };

    // Lambdas : unnamed functions

    // To sort the employee list according to the salary(High to Low)
    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees sorted by salary -> Highest to Lowest" << endl;

    for_each(employees.begin(), employees.end(), displayEmploye);

    // To get the employee details whose salary is above 50,000
    vector<Employee> highEarners;

    copy_if(employees.begin(), employees.end(), back_inserter(highEarners), [](const Employee &e)
            { return e.salary > 50000; });

    cout << "Employees who are high earners" << endl;

    for_each(highEarners.begin(), highEarners.end(), displayEmploye);

    // Reduce method in JS = Accumulator in Cpp.

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    cout << "Total Salary : " << totalSalary << endl;

    // To find the average salary :

    double averageSalary = totalSalary / employees.size();

    cout << "Average salary : " << averageSalary << endl;

    // To find the highest paid :

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    // cout << "Highest Paid : " << highestPaid << endl;

    return 0;
}