#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double max,sum=0.00;
 int n=1,k=0;

  while(cin>>max)
    {
      sum = 0.00;
      n=0;
       if((max) == 0.00)
      {
        return 0;
      }
      else
        {
          //sum=0;
      //k=0;
        do {
          n+=1;

          sum += (1.00/(1.00+n));                        //***FUCkkkkk***//
        //  cout<<sum;
        }while(sum<max);
          cout<<(n)<<" card(s)\n";
        }
      }
}
