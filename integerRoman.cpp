// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

//user can enter any integer value and code should return
//roman number

#include<iostream>
#include<string>
using namespace std;

class Conversion{
    public:
        int number;     
        string romanChar;
        string i1 = "I" , v5 = "V",x10 = "X",l50 = "L",c100 = "C",d500 = "D",m1000 = "M";
    void log(int num){
        if(num > 1 && num < 5){
            if(num > 3){
                cout << i1 + v5; 
            }
            int i =1;
            while(i<=num){
                if(i <= 3)
                    cout << i1 ;
                i++;
            }
            
        }
    }
    
    void logic(){
        switch (number)
        {
        case 1:
            cout << "The roman number is " << i1 << endl;
            break;
        case 5:
            cout << "The roman number is " << v5 << endl;
            break;
        case 10:
            cout << "The roman number is " << x10 << endl;
            break;
        case 150:
            cout << "The roman number is " << l50 << endl;
            break;
        case 100:
            cout << "The roman number is " << c100 << endl;
            break;
        case 500:
            cout << "The roman number is " << d500 << endl;
            break;
        case 1000:
            cout << "The roman number is " << m1000 << endl;
            break;
        default:
            cout << "Roman number" << endl;
            log(number);
            break;
        }
    }
    void printData(){
        cout<<"The number is "<< number <<endl;
        cout<<"The charcter is "<< romanChar <<endl;
    }
    // printData();
};

int main(){
    int num;
    cout << "Enter a number to convert into Roman number" << endl;
    cin >> num;
    // Conversion con;
    // con.printData();
    // con.logic();
    Conversion obj1;
    obj1.number = 1;
    obj1.romanChar = "I";

    Conversion obj2;
    obj1.number = 5;
    obj1.romanChar = "V";

    Conversion obj3;
    obj1.number = 10;
    obj1.romanChar = "X";

    Conversion obj4;
    obj1.number = 50;
    obj1.romanChar = "L";

    Conversion obj5;
    obj1.number = 100;
    obj1.romanChar = "C";

    Conversion obj6;
    obj1.number = 500;
    obj1.romanChar = "D";

    Conversion obj7;
    obj1.number = 1;
    obj1.romanChar = "M";

    return 0;
}