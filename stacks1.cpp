#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
#define lli long long int
#define sll(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define llui unsigned long long int 
using namespace std;
struct triplet{
lli pos,req,pop;
};

lli X;
int c1,b1;
pair <lli,lli> B[10005];
triplet C[10005];

void read_inp(){
 	sll(X);
	lli tempx,tempy;
	scanf("%d",&b1);
	int i=0;
	while(i<b1){
		sll(tempx);
		sll(tempy);
		B[i].first = tempx;
		B[i].second = tempy;
		i+=1;
	}
	B[i++].first  = -1;
	B[i].second = -1;
		
}

bool possible(lli x){
	lli tempp = x;
	int j = 0,i=0;
	for( ; B[j].first!=-1 ;){
			
		printf("%lld -- %lld \n",tempp,x);
		if(B[j].first >= C[i].pos && x >= C[i].req){
		 	x += C[i].pop;
		 	printf("%lld -- %lld \n 1st if",tempp,x);
			i+=1;
			continue;
		}
		
		if(B[j].first < C[i].pos ^ (B[j].first >= C[i].pos && x < C[i].req)){
				x-=B[j].second;
				printf("%lld -- %lld \n 2nd if",tempp,x);
				j+=1;
				continue;
			}
		
		}
		return (x>=0);
}

void binsearch(lli x){
	lli l,r,mid,n;
	lli p_min_sum = 1000000007;
	l = 1;r = x;
	n = x;
	while(l<=r){
		mid  = l + (r-l)/2;
		printf("mid---%d\n",mid);
		if(possible(mid)){
			p_min_sum = min(p_min_sum,mid);
			//mid = mid-1;
			r = mid-1;
		//	printf("min is: %d\n",p_min_sum);	
		}
		else{
			l = mid+1;
		}}
	printf("%lld\n",p_min_sum+1);

}


void with_tribes(lli x){
	binsearch(x);

}

int main()
{
	int t;
	//lli min_sum=0;
	scanf("%d",&t);
	while(t--){
		lli max_sum = 0;	
		read_inp();
		si(c1);
		 for(int i=0;i<b1;i++){
                                max_sum += B[i].second;
                         //       printf("%lld -- %lld \n",B[i].first,B[i].second);
                        }
		if(c1 == 0){
			printf("%lld \n",(max_sum+1));
		}
		else{
		//	si(C);
			for(int i =0 ;i<c1;i++){
				sll(C[i].pos);sll(C[i].req);sll(C[i].pop);
			//	printf("%lld %lld %lld \n",C[i].pos,C[i].req,C[i].pop);
			}
			with_tribes(max_sum+1);
	

		}}
}
