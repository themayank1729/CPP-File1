#include <iostream>
int Search(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (k == arr[i])
            return i;
    }
    return 0;
}
int main()
{
    int size;
    std::cout << "Enter length of array";
    std::cin >> size;
    std::cout << "Enter which element do you want to find";
    int key;
    std::cin >> key;
    int arr[1000];
    std::cout << "Enter " << size << " elements of array";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    int ans = Search(arr, size, key);
    if (ans == 0)
        std::cout << "Element not found ";
    else
        std::cout << "Element found at position " << ans;
}