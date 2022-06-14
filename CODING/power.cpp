#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
 using namespace std;

double pow(double x,int n)
{
  long long int m=n;
  if(m<0) m=(-1)*m;
  double ans=1;
  while(m!=0)
  {
    if(m%2==0)
    {
      x=x*x;
      m=m/2;
    }
    ans=ans*x;
    m=m-1;
  }
  if(n<0) return double (1.0)/double (ans);
  return ans;
}



 int main()
{

  cout<<pow(3,3);
}