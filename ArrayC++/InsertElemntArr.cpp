#include<iostream>
using namespace std;

int main(){
    int arr[] = {4 , 5 , 8 , 6 , 98 ,52 , 65} , value , ele;
    cout << "Enter the position to insert element : ";
    cin >> ele;
    cout << "Enter the number to add : ";
    cin >> value;

    // a[i] will assign the value while shifting one location after other.
    for(int i = 8 ; i > ele ; i--){
        //it will add one element at the end and then will start shifting 1 element from their
        arr[i] = arr[i-1];
    }
    //at the end we will assign the value to the empty space.
    arr[ele] = value;


    // Update the size of the array

    for(int i=0;i<9;i++){
        cout << "the value : " << arr[i] << endl;
    }

    return 0;
}