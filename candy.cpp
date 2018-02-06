#include<iostream>
#include<cstdio>
#include<cmath>

#define  MAX 10000
int A[MAX];
int check_dev(int m,int n)
{
	using namespace std;
	int i,sum=0,sum1=0;
	for(int i=0;i<n;i++)
	{
		if(m-A[i] > 0)
			sum+=(m-A[i]);
		else
			sum1+=(m-A[i]);
	
	}
//	cout<<"======="<<sum<<"==========="<<sum1;
	return abs(sum);
}
int main()
{
	int a,b,t,sum=0,mean;
	while(scanf("%d",&a) && a!=-1)
	{
		sum=0;
		for(int i=0;i<a;i++)
			{
				scanf("%d",&A[i]);
				sum+=A[i];
			}
			if(a==1)
				std::cout<<"0"<<"\n";
			else if(sum%a)
				std::cout<<"-1"<<"\n";
			else
			{
				mean = sum/a;
				t = check_dev(mean,a);
				printf("%d\n",t);
			}
	}			
return 0;
}
