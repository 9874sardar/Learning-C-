// Vector is dynamic array which can change its size dynamically unlike the static vector

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0; i < v.size(); i++){
        cout<< v[i]<< " ";
        cout<< v.at(i)<< " "; //alternative of the above
    }
    cout<<endl;
}

int main()
{
    // syntax of vector and different ways
    vector<int> vec1; //Zero length vector
    vector<char > vec2(4); //4 element character vector
    //its a dynamic array
    vector<int> vec3(vec2); // 4 element character vector from vec2
    
    
    int ele,size;
    cout<<"Enter the size of the array\n";
    cin>>size;

    for(int i=0; i< size ;i++){
        cout<<"Enter an elemnt :\n";
        cin>>ele;
        vec1.push_back(ele);
        //push_back to get element in the array dynamically
    }
    // vec1.pop_back();
    //it will pop the last element of the array
    vector<int> :: iterator itr = vec1.begin();
    //iterator inserts the data in the array accordingly
    vec1.insert(itr+2,50,555);
    //we can insert multiple copies of the number by <vector name>.insert(iterator variable, number of copies,number)


    display(vec1);
    return 0;
}