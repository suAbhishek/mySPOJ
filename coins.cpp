// ======================DYNAMIC PROGRAMMING APPROACH-MEMOIZATION xD==================================================//
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

 long long int max_sum[10000000];
 //long int func(long int );
 long long int func(long long int n)
{
     long long int max2,max1=0,temp;
     if(n==1 || n==0)
     {
       max_sum[n] = (n&n);
       return max_sum[n];
     }
     if(n>10000000)
     {
       max1 = func(n/2) + func(n/3) + func(n/4);
        return max1;
     }
     if(!max_sum[n] && n<=10000000)
      {
            temp = n;
            //cout<<temp<<n;
            //cout<<temp<<max_sum<<"\n";
            max2 = func(n/2) + func(n/3) + func(n/4);
            max_sum[n] = max(max2,temp);
      }

    return max_sum[n];

}
int main()
{

    long long int a,b;
    while((cin>>a))
    	{printf("%lld\n",func(a));}
}
