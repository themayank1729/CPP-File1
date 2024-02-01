#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
void snakePattern(int n)
{
    int num, a = n, b = 0;
    for (int i = 1; i <= n; i++)
    {
        num = i;
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << setw(3) << i << "  ";
            }
            if (j % 2 == 0)
            {
                cout << setw(3) << num + (2 * a - 3) << "  ";
            }
            if ((j % 2 != 0) && (j != 1))
            {
                cout << setw(3) << num + (2 * a - 3) + b << "  ";
                num = num + (2 * a - 3) + b;
                b = b - 4;
            }
        }
        if (i > 1)
        {
            a--;
            b = 2 * (i - 1);
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter any positive integer number ";
    cin >> n;
    snakePattern(n);
}
/*
output:

Enter any positive integer number 7
  1
  2   13
  3   12   14
  4   11   15   22
  5   10   16   21   23
  6    9   17   20   24   27
  7    8   18   19   25   26   28
 */