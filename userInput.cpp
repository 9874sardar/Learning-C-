#include<iostream>
using namespace std;

int main(){
    int a , b , sum ;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >>b;
    sum = a + b;
    cout << "The sum of two number is " << sum << endl; 

    cout << "The muliplication of two number " << a*b << endl;
    
    //Type Casting
    cout << "The divison of two number " <<(float) a/b << endl;

    return 0;
}