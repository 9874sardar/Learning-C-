// 2. find unique elemnt in an array {ocorance of the element only 1 time}

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,4,7,8,5,9};
    int storeVal;
    cout << "unique elements are : " ;
    for(int i=0;i<10;i++){
        storeVal = arr[i];
        int count=0;
        for(int j=0;j<10;j++){
            if(storeVal == arr[j])
                count++;
        }
        if(count == 1)
            cout << arr[i] <<" ";
        else if(count == 2){
            cout <<"Duplicate : " << arr[i] << " ";
        }
    }
    return 0;
}