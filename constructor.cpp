#include <iostream>
#include <string>
using namespace std;

class Employee
{
    // public modifier means that anyone can use it
public:
    string name;
    int salary;

    Employee(string name, int salary, int password) // constructor for this class
    {
        this->name = name;
        this->salary = salary;
        this->password = password;
    }
    void printDetails()
    {
        cout << "Name of the employee is " << this->name << endl; // syntax to print inside the same class ->
        cout << "Name of the salary  is " << this->salary << " Rupees." << endl;
    }
    void printPassword()
    {                                                                     // To print this outside this class we need to create this method under Public
        cout << "Password of the employee is " << this->password << endl; // syntax to print inside the same class ->
    }

    private:
        int password;
};

class TCS : public Employee{ //inheritance
    public : 
        int numberOfEmployee;
};

int main()
{

    Employee emp("sardar Tariq",1000,4744); //sending data in constructor
    emp.printDetails();
    emp.printPassword();
    return 0;
}