#include <iostream>
#include "help.h"

void sort(int arr[], int start, int end);
void swap(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main()
{
    // int list[] =  {5, 1, 23, 4, 5, 6, 1, 11, 51};
    int list[] = {1, 2, 3, 4, 5};
    int length =  sizeof(list) / sizeof(int);

    cout << "Before: ";
    print(list, length);

    sort(list, 0, length-1);

    cout << "After: ";
    print(list, length);
}

void sort(int arr[], int start, int end) 
{
    // التأكد من القيم
    if (start >= end)
        return; 

    int mid = start + (end - start) / 2;
    swap(arr[mid], arr[end]);
    int pivot = arr[end];

    int large;
    bool lock = false;
    for (int c = start; c < end; c++)
    {
        // c => الحالي
        if (arr[c] > pivot && !lock)
        {
            large = c;
            lock = true;
        }
        if (arr[c] < pivot)
        {
            swap(arr[c], arr[large]);
            large++;
        }
    }
    swap(arr[large], arr[end]);
    
    // sort left
    sort(arr, start, large-1);
    // sort right
    sort(arr, large+1, end);
}

