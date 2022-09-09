#include<iostream>
// #include<string> is used for using string functions
#include<string>
using namespace std;

int main(){
    int i , j, n , k , l ,m;
    // string name = "sardarTariq";
    cout << "Enter highest numbers of stars "<<endl;
    cin >> n;
    // for a star pyramid starting from 1 to n
    // *
    // **
    // ***
    // ****
    // for(i=0;i<=5;i++){
    //     for(j=0;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for a star pyramid starting from n to 1.
    // *****
    // ****
    // ***
    // **
    // *
    // for(i=n;i>0;i--){
    //     for(j=i;j>0;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // *      *
    // **     **
    // ***    ***
    // ****   ****
    // *****  *****
    // ****** ******
    // int storeValue = n;
    // for(i=0;i<=n;i++){
    //     for(j=0;j<=i;j++){
    //         cout << "*";
    //     }
    //     for(k=storeValue;k>=0;k--){
    //             cout << " ";
    //         }
    //     storeValue-- ;
    //     for(j=0;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // *            *
    // **          **
    // ***        ***
    // ****      ****
    // *****    *****
    // ******  ******
    // *****    *****
    // ****      ****
    // ***        ***
    // **          **
    // *            *
    // int storeValue = n;
    // for(i=0;i<n;i++){
    //     for(j=0;j<=i;j++){
    //         cout << "*";
    //     }
    //     for(k=storeValue;k>=0;k--){
    //             cout << "  ";
    //         }
    //     storeValue-- ;
    //     for(j=0;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // for(i=n;i>=0;i--){
    //     for(j=i;j>=0;j--){
    //         cout << "*";
    //     }
    //     for(k=0;k<=storeValue;k++){
    //         cout << "  ";
    //     }
    //     storeValue++;
    //     for(j=i;j>=0;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //    *
    //   * *
    //  * * *
    // * * * *
    // int storeValue = n;
    // for (i=0;i<=n;i++){
    //     for(k=storeValue;k>0;k--){
    //         cout << " ";
    //     }
    //     storeValue--;
    //     for(j=0;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // } 

    //    *
    //   * *
    //  * * *
    // * * * *
    //  * * *
    //   * *
    //    *
    //////////////////////////Baki hai
    // int storeValue = n;
    // for (i=0;i<=n;i++){
    //     for(k=storeValue;k>0;k--){
    //         cout << " ";
    //     }
    //     storeValue--;
    //     for(j=0;j<=i;j++){
    //         cout << "* ";
    //     }

        // for(k=0;k<storeValue;k++){
        //     cout << " ";
        // }
        // storeValue--;
        // for(j=n;j>=0;j--){
        //     cout << "* ";
        // }
    //     cout << endl;
    // }

// { *  * * * * * ** }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // int store;
    // for (i=1;i<=4;i++){
    //     store = i;
        
    //     for(j=1;j<=i;j++){
    //         cout<< store << " ";
    //         store++;
    //     }
    //     cout << endl;
    // } 

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    
    ////char c = 'A'+1;
    ////cout << c;

    // A A A
    // B B B
    // C C C

    // A B C 
    // D E F 
    // G H J

    // A B C 
    // B C D
    // C D E

        //           1
        //         1 2 1
        //       1 2 3 2 1
        //     1 2 3 4 3 2 1
        //   1 2 3 4 5 4 3 2 1

    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1 ; k<=i;k++ ){
            cout << k;
        }
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        cout << endl;
    }


    return 0;
}