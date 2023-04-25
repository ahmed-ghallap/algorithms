// بسم الله الرحمن الرحيم
#include <iostream>

using namespace std;

void print(int arr[], int end);
void sort(int arr[], int end);
void swap(int &n1, int &n2);

// ToDo
// 1. init print
// 2. init sort
// 3. init swap
int main()
{
    // int list[] = {10, 23, 1, 8, 5, 3, 21, 15};
    int list[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(list) / sizeof(list[0]);

    cout << "Before: ";
    print(list, n);

    sort(list, n);

    cout << "After: ";
    print(list, n);

}

void sort(int arr[], int end)
{
    // {10, 23, 1, 8, 5, 3, 21, 15}
    // [1, 2, 5, 8, 10, 15, 21, 23]

    for (int i = 1; i < end; i++)
    {
        // j = the current element
        int j = i;
        while(arr[j] < arr[j-1] && j != 0) // do sort
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
        print(arr, end);
    }
}

void swap(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}



void print(int arr[], int end)
{
    // [10, 2, 3, 3]
    cout << '[';
    for (int i = 0; i < end-1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[end-1] << ']' << endl;
}