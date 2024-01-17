#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int b=n;
    for (size_t i = 1; i <= n; i++)
    {
       for (size_t j = 1; j<n*2; j++)
       {
        if (j<a)
        {
            cout<<" ";
        }
        else if ((b+1)<=j)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
        }
        
       }
       cout<<endl;
       a--;
       b++;
    }
    
}