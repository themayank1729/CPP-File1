#include <iostream>
#include <math.h>
void Reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void Printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << *(arr + i) << "   ";
    }
}

int main()
{
    int size;
    std::cout << "Enter size of array";
    std::cin >> size;
    int arr[10000];
    std::cout << "Enter " << size << " elements in array";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    Reverse(arr, size);
    Printarray(arr, size);
}