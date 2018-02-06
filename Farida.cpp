#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	long long int A[10000],x,y,n;
	
	int t,no=1;
	cin>>t;
	while((no++)<=t)
	{
		cin>>n;
		
		if(n == 0)
		{
			cout<<"Case "<<no-1<<": "<<"0"<<"\n";
			continue;
		}
		if(n==1)
		{
			cin>>x;
			cout<<"Case "<<no-1<<": "<<x<<"\n";
			continue;			
		}
		if(n == 2)
		{
			cin>>x>>y;
			cout<<"Case "<<no-1<<": "<<max(x,y)<<"\n";
						
		}
		else
		{
			A[0] = 0;
			for(int i =1 ;i<=n;i++)
			{
				cin>>A[i];
			}
			
			
			for(int i = 3 ; i<=n ;i++)
			{
				A[i] += max(A[i-2],A[i-3]); 
			}
			
			cout<<"Case "<<no-1<<": "<<max(A[n],A[n-1])<<"\n";
		
		}		
			
	}				
}
