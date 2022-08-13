#include<iostream>
using namespace std;

int main(){
    int a = 34;
    int * ptr; // pointer declaration
    ptr = &a; // &a means storing the address of a in the pointer ptr

    // * is a dereferancing operator (it will give the value of the address with pointer variable)

    cout << "The address of a is "<< ptr << endl; // address of a variable
    cout << "The value of a var using pointer variable is "<< *ptr << endl;
    cout << "The address of a using the &a is "<< &a << endl;
    cout << "The address of a is "<< ptr << endl; // address of a variable

    return 0;
}