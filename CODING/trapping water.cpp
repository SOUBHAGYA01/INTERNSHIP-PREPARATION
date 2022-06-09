#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int main()
{

    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};


        if (height.empty()) return 0;

    int size = height.size();
    vector<int> lf(size);

    vector<int> rb(size);

    lf[0] = height[0];
    rb[size - 1] = height[size - 1];

    for (int i = 1; i < size; i++)
    {
        lf[i] = max(height[i], lf[i - 1]);
    }
    for (int i = size - 2; i >= 0; i--)
    {
        rb[i] = max(height[i], rb[i + 1]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += min(lf[i], rb[i]) - height[i];
    }

    cout<< sum;
}

