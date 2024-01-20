
#include <iostream>
using namespace std;
void printSubarrays(int arr[],int n)
{
  cout<<"All possible subarrays are "<<endl;
  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n;j++)
      {
          for(int k=i;k<=j;k++)
          {
              cout<<arr[k]<<" ";
          }
          cout<<endl;
      }
      cout<<endl<<endl;
  }   
}
int main ()
{
  int n;
  cout<<"enter length of array";
  cin >> n;
  int arr[1000];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
 printSubarrays(arr,n);
  return 0;
}
