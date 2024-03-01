#include <bits/stdc++.h>
using namespace std;
int numGCD(int a, int b)
{
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}
int main()
{
    int m, n;
    cout << "enter two numbers : ";
    cin >> m >> n;
    cout << "\n"
         << "GCD  is :" << numGCD(m, n);
    return 0;
}