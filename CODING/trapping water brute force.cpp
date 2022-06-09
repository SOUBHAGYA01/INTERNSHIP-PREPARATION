#include<iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) 
      {
            cin>>a[i];
      }
      int l[n];
      int r[n];
      int mf=l[0]=a[0];
      int mb=r[n-1]=a[n-1];
      for(int i=1;i<n;i++) 
      {
            if(a[i]>mf)
            mf=a[i];
            l[i]=mf;
      }
      for(int i=n-2;i>0;i--)
      {
            if(a[i]>mb)
            mb=a[i];
            r[i]=mb;
      }
      int s=0;
      for(int i=0;i<n;i++)
    {  s+=min(r[i],l[i])-a[i];
    }
    cout<<s<<endl;
}
