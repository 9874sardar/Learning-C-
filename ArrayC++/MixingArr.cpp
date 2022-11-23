// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 

// Example 1:

// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
// Example 2:

// Input: nums = [1,2,3,4,4,3,2,1], n = 4
// Output: [1,4,2,3,3,2,4,1]

#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 10, 20 ,30};
    // // arr.push_back[2];
    // int store1,size = 3,i=0;
    // while(i < 2*size){
    //     store1 = arr[i+1];
    //     // store2 = arr[size + 1];
    //     arr[i+1]=arr[size];
    //     arr[i+2] = store1;
        
    //     // cout << arr[i]<<endl;
    //     i++;
    //     // size++;
    // }
    // int v = 0;
    // while(v < size*2){
    //     cout << arr[v]<<endl;
    //     v++;
    // }
    int nums[] = {2,5,1,3,4,7};
    int n=3;

    int array[6];

    int j=0,i=0;
    while(i<2*n)
    {
        array[i]=nums[j];
        array[i+1]=nums[n+j];
        j++;
        i=i+2;
    }
    int k=0;
    while(k<n*2){
        cout<<array[k]<<endl;
        k++;
    }
    return 0;
}