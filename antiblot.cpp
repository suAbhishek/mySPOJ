#include<iostream>
#include<string>
#include<algorithm>
#include<locale>
//#include<cctype.h>
using namespace std;
#define FOR(i,N) for(int i=0;i<(N);i++)
int temp;
int convert(string temp1,int k)
{
  int res=0;
  FOR(i,temp1.length())
  {
      if(isdigit(temp1[i]))
      {
        res=(res*10)+(temp1[i]-'0');
      }
      else
      {
        res = -1;
        temp = k;
        //return res;
      }
      //return res;
  }
  return res;
}
int main()
{
  string a,b,c,d,e;
  int t,a1,a2,a3;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c>>d>>e;
    a1 = convert(a,1);
    a2 = convert(c,2);
    a3 = convert(e,3);
    
    switch(temp)
    {
      case 1:a1 = a3-a2;
        break;
      case 2:a2 = a3-a1;
      break;
      case 3:
        a3 = a1+a2;
        break;
    }
    cout<<a1<<" + "<<a2<<" = "<<a3<<"\n";
  }
}
