#include<iostream>
using namespace std;

int main()
{
    // if we point a pointer to a 1D array .
        int a[5] = {2,4,6,7,7};
        // int* b = a;
        // cout <<"the position and the value of array : "<< &a[0] << endl;
        // cout <<"The value of the first array : "<< *b;
    // it will point to the first element of the array 

    //int (*p)[5] = a; it will hold the address of the whole array;
        int *p = a;
        cout << p << endl;
        for(int i=0 ; i<5 ; i++){
            cout << "the address : "<< &p[i] <<endl;
            cout << "the value : "<< p[i] <<endl;
        }

    // cout << "the value : "<< p[2] <<endl;

    return 0;
}