#include<iostream>
using namespace std;

class Rectangle {
    int length = 8;
    int breath = 6;
    public:
        void setArea (){
            cout<<"The area of reactangle is "<<length * breath;
        }
    friend void Area(Rectangle);
    friend class Calcu;
};

//friend function
void Area(Rectangle r){
    cout<<"Inside friend function\n";
    cout<<"The length and breath of an rectangle is " << r.length <<" and "<<r.breath<<endl;
}

class Calcu{
    public:
    void CAl(Rectangle &r){
        cout<<"Inside class friend\n";
        cout<<"The area of reactangle is "<< r.length * r.breath;
    }
};

int main(){
    Rectangle r;
    Area(r);
    Calcu c;
    c.CAl(r);
    return 0;
}