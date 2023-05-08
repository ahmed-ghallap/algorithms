#include <iostream>

using namespace std;

void print(int arr[], int end);

void print(int arr[], int end)
{
    // [1, 2, 3]
    cout << '[';
    for(int i = 0; i < end-1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[end-1] << ']' << endl;
}