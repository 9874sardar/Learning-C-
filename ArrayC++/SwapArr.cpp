//  1. Swapping Array elements

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,7,8,9};
    int a,i=0;
    while(i<=8){
        a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
        i = i+2;
    }
    for(int i=0;i<8;i++)
        cout << arr[i] << " ";

    return 0;
}