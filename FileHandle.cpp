#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ofstream fout;
    fout.open("abcd.txt");
    while (fout)
    {
        getline(cin,str);
        if(str == "0"){
            break;
        }
    }
    fout<<str<<endl;
    
    fout.close();

    ifstream file;
    file.open("abcd.txt");
    while(getline(file,str)){
        cout<<"the data is "<<str<<endl;
    }

    file.close();
    
    return 0;
}