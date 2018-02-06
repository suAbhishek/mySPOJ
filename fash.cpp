#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
 int A[1000];
 int B[1000];
  int N,t;
  cin>>t;
  int size,sum;
  while(t--)
  {
      sum=0;
    cin>>size;
      for(int i=0;i<size;i++)
      {
        cin>>A[i];
      }
      for(int i=0;i<size;i++)
      {
        cin>>B[i];
      }
        sort(A,A+size);
        sort(B,B+size);
      for(int i=0;i<size ; i++)
          sum+=(A[i]*B[i]);

      cout<<sum<<"\n";
  }
}
