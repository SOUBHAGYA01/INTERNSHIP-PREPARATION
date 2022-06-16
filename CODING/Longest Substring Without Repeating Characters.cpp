#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    set<char> Set;

    int Max = 0;
    int start = 0;
    int end = 0;
    while (start < s.size())
    {
        auto it = Set.find(s[start]);

        if (it == Set.end())
        {
            if (start - end + 1 > Max)
                Max = start - end + 1;

            Set.insert(s[start]);
            start++;
        }
        else
        {
            Set.erase(s[end]);
            end++;
        }
    }
    return Max;
}

int main()
{
    string s = "abcabc";
    cout << lengthOfLongestSubstring(s);
}

///////////////////////////////////////////////////////;;;;;\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 int lengthOfLongestSubstring(string s) {
        
         int n = s.size();
    int res = 0;  
    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {
            if (visited[s[j]] == true)
                break;
            else {
                res = max(res, j - i + 1);
                visited[s[j]] = true;
            }
        }
         visited[s[i]] = false;
    }
    return res;
        
    }

////////////////////////////////////////optimize solution\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
