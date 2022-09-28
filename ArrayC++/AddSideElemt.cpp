// Pair sum --- Given an array of N integers, and a number sum, 
// the task is to find the number of pairs of integers in the array whose sum is equal to sum.


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 2, 4, 7, 5, 5, 5, 6, 1, 9, -2, 0, 7}, num, store = 0;
    cout << "Enter a number \n";
    cin >> num;
    for (int i = 0; i < 16; i++)
    {
        if (arr[i] + arr[i + 1] + arr[i + 2] == num)
        {
            cout << "The numbers are " << arr[i] << " " << arr[i + 1] << " " << arr[i + 2] <<endl;
            store = 1;
        }
    }
    if (store == 0)
        cout << "The number doesnt exist ";
    return 0;
}