#include <iostream>
#include<cmath>
using namespace std;

int main() {
	long int l,n;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>l;
		n = 2+((l-1)/2)*(7+3*(l-1));
		n%=1000007;
		cout<<n<<"\n";
	}
	// your code goes here
	return 0;
}
