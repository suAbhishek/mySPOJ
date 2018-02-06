//Using vectors ............

#include<cstdio>
#include<iostream>
#include<algorithm>        //std::copy
#include<cmath>
#include<cstring>
#include<vector>

#define int long long
#define double long double
using namespace std;
#undef int
int main()
{
		int res,a[10],b[4][4];
		vector<int> myvector(10);

		int i =10;
		stringstream s1 ;
		int p = 64;
		int  n= 4;
		//powl(a,b) instead of pow(a,b)
		//(int)round(p,(1.0/n) );       //nth root of p
		//printf("%lld",res);
		
		fill_n(a,10,3);  //filling a 1d array with a constant value
		for(int i= 0 ;i<10;i++)
			cout<<a[i]<<"\n";
			
		printf("MEMSET");
		memset(b,-1,sizeof(b));
		for(int i= 0; i <4;i++)
		{
			for(int j=0;j<4;j++)
			{
				
			cout<<b[i][j];
				}
			cout<<"\n";
		}
		cout<<"COPY";
		copy(a+0,a+9,(myvector.begin()));
		for(vector<int>::iterator it = myvector.begin(); it!=myvector.end();it++){
			cout<<*it<<"\t";
			}
		cout<<"after replace..\n";
		//for value at particular index in vector ------ myvector.at(i)
		replace(myvector.begin(),myvector.end(),3,12);
		for(vector<int>::iterator it = myvector.begin(); it!=myvector.end();it++){
			cout<<*it<<"\n";
			}
		s1<<"Girl "<<i;
		cout<<s1.str()<<"\n";
		return 0;
		
}

