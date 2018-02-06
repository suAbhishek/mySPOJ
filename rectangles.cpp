#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	for(int i = 1;i<=((int)sqrt(n));i+=1)
  {
    sum+=((n/i)-i+1);
  }
  cout<<sum;
	// your code goes here
	return 0;
}
