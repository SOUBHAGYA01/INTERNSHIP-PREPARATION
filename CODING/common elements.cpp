#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[n1];
    int b[n2];
    int c[n3];
    for (int i = 0; i < n1; i++) cin>>a[i];
    for (int i = 0; i < n2; i++) cin>>b[i];
    for (int i = 0; i < n3; i++) cin>>c[i];

    unordered_map<int,int> m1,m2,m3;
    for(int i=0;i<n1;i++) m1[a[i]]++;
    for(int i=0;i<n2;i++) m2[b[i]]++;
    for(int i=0;i<n3;i++) m3[c[i]]++;
    vector<int> v;

    for(int i=0;i<n1;i++)
    {
           if(m1[a[i]] & m2[a[i]] &  m3[a[i]])
           {
                      v.push_back(a[i]);
                      m1[a[i]]=0;
           }
    }
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
  
}
TC=O(n1+n2+n3)
sc=O(n1+n2+n3)
////////////////////////////////////////////second apporach|||||||||||||||||||||||||||||||||||||||||
  #include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[n1];
    int b[n2];
    int c[n3];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n3; i++)
        cin >> c[i];

    int i = 0, j = 0, k = 0;
    vector<int> v;
    while (i < n1 & j < n2 & k < n3)
    {
        if (a[i] == b[j] & b[j] == c[k])
        {
            v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
        {
            k++;
        }
        int x = a[i - 1];
        while (x == a[i])
            i++;
        int y = b[i - 1];
        while (y == b[i])
            j++;
        int z = c[i - 1];
        while (z == c[i])
            k++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
TC=O(n1+n2+n3)
  sc=O(1)
