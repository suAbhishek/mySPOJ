#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
		int t,x1,y1,x2,y2;
		cin>>t;
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2;
			if(x2-x1 == 0)
			{
				if(y2-y1 == 0)
				{
					cout<<"sad\n";
				}
				else
				{
					(y2>y1)?cout<<"up\n":cout<<"down\n";
				}
				continue;
			}
			if(y2-y1 == 0)
			{
				if(x2-x1 == 0)
				{
					cout<<"sad\n";
				}
				else
				{
					(x2>x1)?cout<<"right\n":cout<<"left\n";
				}
				continue;
			}
			if(x2-x1 != 0)
			{
				if(y2-y1 == 0)
				{
					(x2>x1)?cout<<"right\n":cout<<"left\n";
					
				}
				else
				{
					cout<<"sad\n";
				}
				continue;
			}
			if(y2-y1 != 0)
			{
				if(x2-x1 == 0)
				{
					(y2>y1)?cout<<"up\n":cout<<"down\n";
					
				}
				else
				{
					cout<<"sad\n";
				}
				continue;
			}		
		
		}
}
