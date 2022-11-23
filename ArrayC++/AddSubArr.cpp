#include <iostream>
using namespace std;


// !!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!
// NOT SOLVED YET !!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!

int main()
{
    int arr[] = {20,1, 2, 3, 4};
    int a = 0, sum5 = 0, sum1 = 0, len = 5, value, store, val = 10;
    // while (a < 5)
    // {
    //     cout << "the data " << sum << endl;
    //     if (a = 0)
    //     {

    //         int i = a;
    //         while (i < 5)
    //         {
    //             if (sum != val)
    //             {
    //                 // sum1 = arr[i];
    //                 sum = sum + arr[i];
    //                 // sum1 =  sum sum;
    //                 // sum = sum + sum1;
    //                 cout << "the data " << sum << endl;
    //                 store = i;
    //             }
    //             else
    //                 break;
    //             i++;
    //         }
    //     }
    //     else
    //         break;
    //     a++;
    // }
  
    while(a<5){
        int i = a,sum=0;
        while(sum <= val){
            sum = sum + arr[i];
            cout<<"the values "<<sum<<endl;
            store = i;
            i++;
        }
        a++;
    }
  
    cout << "The value is " << a << " and the ending is " << store;
    return 0;
}