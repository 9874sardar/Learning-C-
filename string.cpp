#include<iostream>
// #include<string> is used for using string functions
#include<string>
using namespace std;

int main(){
    string name = "sardarTariq";
    cout << "My name is " << name <<endl;
    cout << "My name length is " << name.length()<< endl;
    //substr(firstIndex_no , RequiredIndex_no);
    //IF last index is a big number then it will run till the string is present
    cout << "My last name is " << name.substr(6,10)<< endl;
    return 0;
}