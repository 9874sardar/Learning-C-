// to write in the file handling = file.write((char *) &s[i], sizeof(s[i]));
// to read in the file handling = file.read((char *) &s[i], sizeof(s[i]));

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){
    fstream file;
    char name[20];
    int age;

    file.open("C:\\demo.txt",ios::out);
    if(!file){
        cout<<"Error in file\n";
        return 0;
    }
    cout<<"File created successfully"<<endl;
    cout<<"Enter the name of the user\n";
    cin.getline(name,20);
    cout<<"Enter the age of the user\n";
    cin>>age;
    file<<name<<" "<<age<<endl;
    // file<<age;
    cout<<"The data was inserted into the file"<<endl;
    file.close();

    file.open("C:\\demo.txt",ios::in);
    if(!file){
        cout<<"The file not their in input mode\n";
    }
    file>>name;
    file>>age;
    cout<<"The data we got "<<name <<" and "<<age<<endl;
    cout<<"the file input in the code is done"<<endl;
    file.close();
    return 0;
}