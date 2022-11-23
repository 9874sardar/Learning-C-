#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size,val,sum=0,start_index,end_index;
    cout<<"Enter the size of the array\n";
    cin>>size;
    cout<<"Enter the added value to Check\n";
    cin>>val;
    vector<int> v(size);
    for(int i = 0 ;i<size;i++){
        int arrVal;
        cout<<"Enter the value :";
        cin>>arrVal;
        v.push_back(arrVal);
    }
    for(int i=0; i<size;i++){
        for(int j=i;j<size-i;j++){
            sum = v[j] + sum;
            cout<<"The sum value" << sum <<" Size "<< i << " "<<j <<endl;
                        if(sum == val){
                start_index = i;
                end_index = j;
            }
        }
    }
    cout<<"The final output is "<<start_index<<" "<<end_index;
    return 0;
}