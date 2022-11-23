#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        // cout<<"the values of the data is "<<Node :: data;
        // cout<<"the values of the referance is "<<Node :: next;<<endl;
};

int main(){
    Node *head , *middle ,*last;

    //new keyword is used to create an object and allocate a memory to it
    head = new Node();
    middle = new Node();
    last = new Node();

    //assign data
    head->data = 10;
    middle->data = 20;
    last->data = 30;

    //linking the nodes
    head->next = middle;
    middle->next = last;
    last->next = NULL;

    cout<<"The DATA"<<endl;
    cout<<"The head "<<head->data<<" the middle "<<middle->data << " last "<<last->data<<endl ;
    cout<<"The REFERANCE"<<endl;
    cout<<"The head "<<head->next<<" the middle "<<middle->next << " last "<<&last->next<<endl ;
    return 0;
}

//Using of -> arrow function and stuct type
// struct LinkLis
// {
//     public:
//     int age;
//     string name;
// };


// int main()
// {
//     cout<<"hello\n";
//     LinkLis c1, c2;
//     LinkLis *ptr = &c1;

//     c1.age = 56;
//     c1.name = "Sardar";

//     (*ptr).age = 63;
//     // ptr->age = 66;

//     cout<<c1.name << " age is "<<c1.age<<endl;
    
//     return 0;
// }
