#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
 using namespace std;

vector <int> tsum(vector<int> &num,int target)
{
     vector<int> res;
     map<int,int> m;
     
     for(int i=0;i<num.size();i++)
     {
         if(m.find(target-num[i])!=m.end())
         {
             res.push_back(m[target-num[i]]);
             res.push_back(i);
             return res;

         }
         m[num[i]]=i;
     }
     return res;

}
 int main()
{
    vector<int>num{5,8,9,3,4};
    int target=11;
   vector<int> r= tsum(num,target);  
   
   cout<<r[0]<<" ,"<<r[1];



}