#include<iostream>
using namespace std;

class A
{ 
	int i=0,x;
	public: A(){
         cout<<i<<endl;}
    A(int x)
    { 
         i=x; 
         cout<<i<<endl;
    }
};

int main()
{
    //its is data type which holds the address of other variables

    //int a=7;
    // & --> address of operator
    //int* c = &a;
    //cout<<"the address of a is : "<<c <<endl;
    // * --> DeReferancing operator
    //int* b = &a;
    //cout<<"the value in address of a is : "<<*b;

    //an operator which stores the address of pointer
    //int** x = &b;

    // A s1(100);
    // A s2();
    // A s3=100;
    // return 0;


int num = 4561 , sum , digit;
    //cin >> num
    while(num != 0){
        //num = num % 10;
        
        digit = num % 10;
num = num / 10;
        cout << digit <<endl;
        // sum = digit + sum;
    }

    cout << sum;


    return 0;
}