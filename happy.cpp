

//TRY BISHOPS IN C++ 
// FLOYD CIRCLE DETECTION.........MEMOIZATION(not exactly)
#include<iostream>
using namespace std;
int temp[1000];
int break1(int num)
{
        int sum=0,r;
        while(num)
        {
                r = num%10;
                sum += r*r;
                num/=10;
        }
        return sum;
}
int main()
{
        bool f1=1;
        int num1,count=0,i;
        cin>>num1;
        while(num1 != 1)
        {
              num1 = break1(num1);
              if(temp[num1] == 0)
              {
              		temp[num1]=1;
              		count++;
              }
              else
              {
              		f1 = 0;
           		break;   		
              }
              
                
  	}               
      if(f1)
        {
        	cout<<count<<"\n";
        }
        else
        {
        	cout<<"-1\n";
        }
}





