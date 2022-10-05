#include<iostream>
using namespace std;

class Num{
    private : 
        int counting=0,a;
    public: 
        
        Num(int n){
            counting++;
            a=n;
            cout<<"The number is " << counting++<<" "<< a<<endl;
        }
        ~Num(){
            cout<<"the number after destructor is "<<counting--<<" "<< a <<endl;
        }
};

int main()
{
    Num n1(1);

    //creating a block . At the end of the block it will automatically end the functions
    {
        cout<<"Entering the block\n";
        Num c1(2);
        cout<<"exiting the block \n";
    };

    Num s1(3);

    return 0;
}