#include<iostream>
using namespace std;

int add(int a,int b){
    return a + b;
}

int substract(int a ,int b){
    return a - b;
}

int multiply(int a,int b){
    return a*b;
}

float divide(int a,int b){
    //Type casting
    return (float) a / b;
}

int main(){
    int a , b , sum ;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >>b;
    sum = a + b;
    cout << "The add of two number is " << add(a,b) << endl; 
    cout << "The substract of two number is " << substract(a,b) << endl; 
    cout << "The multiply of two number is " << multiply(a,b) << endl; 
    cout << "The divide of two number is " << divide(a,b) << endl; 
    return 0;
}