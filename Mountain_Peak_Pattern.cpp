#include<iostream>
using namespace std;
void mountainPattern(int n)
{
    int a=0,b=0;
     for (int i = 1; i <=n; i++)
     {
     for (int j = 1; j<=(4*n-3); j++)
     {
        if((j==n-a)||(j==n+b)||(j==(2*n+3-a))||(j==(2*n+3+b)))
        {
            cout<<" *";
        }
        else 
        {
            cout<<"  ";
        }
        
     }
     cout<<endl;
     a++;
     b++;
        
     }
     
}
int main()
{
    int n;
    cout<<"Enter Mountain height ";
    cin>>n;
    cout<<endl;
    mountainPattern(n);
}