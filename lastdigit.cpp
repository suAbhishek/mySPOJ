#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long long int b;
  unsigned int a,m;
   short int t;
   cin>>t;
   while(t--)
   {
      cin>>a>>b;
      if(a==0)
        {cout<<"0"<<"\n";
        continue;}
      if(b == 0)
        {cout<<"1"<<"\n";
        continue;}
      if(int(b%4)==0)
      {
          m = pow(a,4);
          m %= 10;
          cout<<m<<"\n";
      }
      else
      {
         m = b%4;
         m = pow(a,m);
         cout<<m%10<<"\n";
      }

   }
 }
