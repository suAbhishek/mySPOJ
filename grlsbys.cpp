#include <iostream>
#include<cmath>
using namespace std;

int main() {
	
	int g,b;
	while((cin>>g && cin>>b) &&(g!=-1 && b!=-1))
	{
		if(g==0 && b==0)
		{
			cout<<"0\n";
			continue;
		}
		if(g>=b)
		{
			cout<<ceil(double(g)/(b+1))<<"\n";           //check double
		}
		else
		{
			cout<<ceil(double(b)/(g+1))<<"\n";
		}
	}
	// your code goes here
	return 0;
}
