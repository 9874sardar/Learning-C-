// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

 

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16

#include<iostream>
using namespace std;

int main(){
    int i , tw2o = 2 , number ;
    long two =2 ;
    bool b1 = false;
    cout << "Enter a number: ";
    cin >> number;

    // while(two < number){
    //     two = two * 2;
    //     if(number == two){
    //         b1 =  true;
    //         break;
    //     }
    // }

    // int two = 2 ;
        // bool b1 = false;
        while(two < number+1){
            cout << two << "  " <<endl;
            if(two == number){
            b1 =  true;
            break;
            }
            two = two * 2;
        }

    if(b1)
        cout <<"True , its in the multiple of 2's power";    
    else 
        cout <<"False , its not in 2's multiple";

    return 0;
}