#include<iostream>
#include<cstdio>
#include<cmath>
#define si(n) scanf("%d",&n)
#define sld(n) scanf("%ld",&n)
#define MAX 1000
using namespace std;
int a[MAX][MAX],sieve[MAX];
long int k1;
void fill_mat(int n1) //matrix filling
{
  //cout<<"IN FILL";
    int j;
    for(int i=1;i<=n1;i++)
    {

      for(int j=n1;j>i;j--)
      {

            if(sieve[i]>0)
            {
              a[i][j] = 1;
              a[j][i] = 0;
              sieve[i]-=1;
              continue;
            }
            else if(sieve[i] == 0)
            {
              a[i][j] = 0;
              a[j][i] = 1;
              //cout<<" j = "<<j<<" val "<<sieve[j]<<"\n";
              if(sieve[j]>0)
              {sieve[j]-=1;}
            }
            else{
              break;
            }
      }
    }
}
int comb(int m, int n)
{
    int mat[MAX][MAX];
    int i, j;
    if (n > m) return 0;
    if( (n == 0) || (m == n) ) return 1;
    for(j = 0; j < n; j ++)
    {
        mat[0][j] = 1;
        if (j == 0)
        {
            for (i = 1; i<= m - n; i ++ ) mat[i][j] = i + 1;
        }
        else
        {
            for (i = 1; i<= m - n; i ++) mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }
    return (mat[m - n][n - 1]);
}
bool checkedge(int n,long int c)
{
      int max_wins = n-1,j=0;
      long int check=0;
      double temp,k;
      sieve[1] = max_wins;
      check += max_wins*max_wins;
      c -= max_wins;
      //n-=1;
      k = n-1;
      for(int i=2;i<=n,k>0;i++)  //filling sieve
      {
          //cout<<" c = "<<c<<"k = "<<k<<"\n";
          temp = double(c/k);
          temp = (ceil(c/k));
          //cout<<"temp = "<<temp<<"\n";
          sieve[i] = temp;
          c -= temp;
          check += (sieve[i]*sieve[i]);
          k-=1;
      }

    //  cout<<"Check = "<<check<<"\n";
      fill_mat(n);
      if(check == k1)
      {
        //cout<<"YUSS EDGE";
        fill_mat(n);
        return true;
      }
      return false;
}
bool checkavg(int n, long int c)
{
  int min_wins = 1,j=0;
  long int check=0;
  double temp,k;
  sieve[1] = min_wins;
  check += min_wins*min_wins;
  c -= min_wins;
  //n-=1;
  k = n-1;
  for(int i=2;i<=n,k>0;i++)  //filling sieve
  {
    //  cout<<" c = "<<c<<" k = "<<k<<"\n";
      temp = double(c/k);
      //cout<<" temp = "<<temp<<"\n";

      temp = (ceil(temp));
      //cout<<" temp = "<<temp<<"\n";
      sieve[i] = temp;
      c -= temp;
      check += (sieve[i]*sieve[i]);
      k-=1;
  }
  if(check == k1)
  {
    //cout<<"YUSS EDGE";
    fill_mat(n);
    return true;
  }
  return false;
}
void printmat(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}
int main()
{
  int t, n;
  long int comb1;
  cin>>t;
  while(t--){
      si(n);
      sld(k1);
      comb1 = comb(n,2);
      if(n==1 && k1>=1)
      {
          if(k1==1){
          cout<<"1\n";
          continue;}
          else
          {
            cout<<"-1\n";
          }
      } //total no. of games
      else{


      if(checkavg(n,comb1))
      {
        printmat(n);
      }
      else if(checkedge(n,comb1))
      {
        printmat(n);
      }
      else{
        cout<<"-1";
      }
      //cout << "\n";
    }
  //  cout<<"\n";
}
}
