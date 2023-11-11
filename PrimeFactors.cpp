#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number";
    cin >> num;
    cout << endl;
    int temp = 1;
    int i = 2;
    while (num > 0)
    {
        if (num % i == 0)
        {
            if (temp != i)
            {
                cout << i << "  ";
                temp = i;
            }
            num = num / i;
        }
        else
        {
            i++;
        }
    }
}
