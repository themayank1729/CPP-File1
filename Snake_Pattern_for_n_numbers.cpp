
#include<bits/stdc++.h>
using namespace std;
void snakePattern(int n)
{
    int a=n,b=0;
    int num;
      for (int i = 1; i <=n; i++)
      {
        num=i;
        for (int j = 1; j <=i; j++)
        {
            if(j==1)
            {
                cout<<i<<"  ";
            }
            if(j%2==0)
            {
                cout<<num+(2*a-3)<<"  ";
            }
            if((j%2!=0)&&(j!=1))
            {
                cout<<num+(2*a-3)+b<<"  ";
                num=num+(2*a-3)+b;
                b=b-4;
            }
            
        }
        if(i>1)
        {
            a--;
            b=2*(i-1);
        }
        cout<<endl;
      }
      
}
int main()
{
    int n;
    cout<<"enter an integer number";
    cin>>n;
    cout<<endl;
    snakePattern(n);
}