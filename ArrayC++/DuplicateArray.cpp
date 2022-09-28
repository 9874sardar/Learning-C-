//  3. find duplicate element in an array

#include<iostream>
using namespace std;


int main(){
    int arr[] = {2,3,4,5,2,4,7,5,5,5},store[10];
    int storeVal,k =0;
    for(int i=0;i<10;i++){
        storeVal = arr[i];
        int count=0;
        for(int j=0;j<10;j++){
            if(arr[i] == arr[j])
            {
                // store[i] = 
                count++;
            }
        }
        // // if(count == 0)
        // //     cout << "no elements are their \n";
        // if(count >= 2){
        //     store[k] = arr[i];
        //     k++;
        //     // cout << arr[i] << " ";
        // }
    
    }
    cout << "duplicate elements are : " ;
    for(int i=0;i<10;i++){
        if(store[i] != store[i])
                cout << " " << store[i];
    }
    return 0;
}