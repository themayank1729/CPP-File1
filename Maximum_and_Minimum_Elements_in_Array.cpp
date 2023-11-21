#include <iostream>
#include <math.h>
int getMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = fmax(maxi, arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = fmin(mini, arr[i]);
    }
    return mini;
}
int main()
{
    int size;
    std::cout << "Enter size of array";
    std::cin >> size;
    int arr[1000];

    std::cout << "Enter " << size << " elements" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Maximum element is :" << getMax(arr, size) << std::endl;
    std::cout << "Minimum element is :" << getMin(arr, size);
}