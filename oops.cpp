#include<iostream>
#include<string>
using namespace std;

class Employee{
        //public modifier means that anyone can use it
        public:
        string name;
        int salary;
        void printDetails(){
            cout << "inside the same class" << endl << "Name of the employee is "<< this->name<<endl; // syntax to print inside the same class ->
            cout << "Name of the salary  is "<< this->salary<<" Rupees."<<endl;
        }
        void printPassword(){ // To print this outside this class we need to create this method under Public
            cout << "Password of the employee is "<< this->password<<endl; // syntax to print inside the same class ->

        }

        private:
        int password = 4744;
        
    };


//ADD CASE LATER

// class Employee2{
//         //protected can be used only in this class but can be used with subClass
//         protected:
// }

int main(){

    // Public , Private ,Protected are called access modifiers

    //varibale or methods can be made with this modifiers
    Employee emp;
    emp.name = "sardar Tariq";
    emp.salary = 1000;
    // emp.password = 232332;
    emp.printDetails();
    emp.printPassword();
    cout << "outside class" << endl << "Name of the employee is "<< emp.name<<endl; // syntax to print outside the same class ->
            cout << "Name of the salary  is "<< emp.salary<<" Rupees."<<endl;
    return 0;
}