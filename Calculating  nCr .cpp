#include <iostream>
int fact(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }
    return p;
}
int nCr(int n, int r)
{
    return (fact(n)) / (fact(r) * fact(n - r));
}
int main()
{
    int n, r;
    std::cout << "enter value of n";
    std::cin >> n;
    std::cout << "enter value of r";
    std::cin >> r;
    std::cout << "value of nCr " << nCr(n, r);
}