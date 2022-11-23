//Sir's Code execution
// recive n number of number from user store them into a file and 
// now read the file if a number is odd number soo write that number into  another file or if it is \
// even number then write it to file even . now print data from both the files even an odd.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");

    // Execute a loop If file successfully opened
    while (fout)
    {
        // Read a Line from standard input
        getline(cin, line);
        // Press -1 to exit
        if (line == "-1")
            break;
        // Write line in file
        fout << line << endl;
    }
    // Close the File
    fout.close();
    ifstream inf{"sample.txt"};
    // If we couldn't open the input file stream for reading
    if (!inf)
    {
        // Print an error and exit
        cerr << "Sorry!! could not find the file!\n";
        return 1;
    }
    // cout<<"the data inside file"<<line<<endl;
    // inf.seekg(20); //It will omite frst five charaters
    // inf.seekg(-15,ios::cur); // move to 5th character
    // inf.seekg(-15,ios::end); // move to 5th character
    // Get the rest of the line and print it, moving to line 2
    // inf.seekg(0,ios::end);
    // inf.seekg(-15,ios::end);
    getline(inf, line);
    cout <<"THe data of line\n" <<line << '\n';
    // inf.seekg(8, ios::cur); // move 8 more bytes into file
    // // Get rest of the line and print it
    // getline(inf, line);
    // cout << "The data of CUR" << line << '\n';
    // inf.seekg(-14, ios::end); // move 14 bytes before end of file
    // // Get rest of the line and print it
    // getline(inf, line);
    // cout <<"The data from END"<< line << '\n';
    return 0;
}