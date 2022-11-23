#include<iostream>
using namespace std;

// int main(){
//     int a, b;
//     cout <<"Enter two numbers\n";
//     cin>>a>>b;
//     try{
//         if(b==0)
//             throw b;
//         else{
//             cout << "The adding of two values are "<<a + b;
//         }
//     }
//     catch(int b){
//         cout <<"ERROR !!!!!!\n";
//         cerr<<"The value cant be divided by 0";
//     }


//     return 0;
// }

class Printer {
    string name_1;
    int availablePaper;
    public:
        Printer(string name,int paper){
            name_1 = name;
            availablePaper = paper;
        }
        void print(string txtDoc){
            int requiredPaper = txtDoc.length() / 10;

            if(requiredPaper > availablePaper)
                throw 1;
            cout<<"Printing .... \n" << txtDoc << endl;
            availablePaper -= requiredPaper;
        }
};

int main(){
    Printer p("some data for testing",10);
    try{
        p.print("HEllo my name is sardar tariq aziz , i am learning exceptional handling\n");
        p.print("HEllo my name is sardar tariq aziz , i am learning exceptional handling\n");
        p.print("HEllo my name is sardar tariq aziz , i am learning exceptional handling\n");
    }
    catch (const char * txtexp){
        cerr <<"Exception : " << txtexp << endl;
    }
    catch (...){
        cerr<<"I am the default execption handler"<<endl;
    }
    return 0;
}