#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int>res;
    int i =  0, j =n;
    for( i = 0; i<n; i++,j++ )
    {
        res.push_back(nums[i]);
        res.push_back(nums[j]);
    }
    for(auto x:res)
        cout<<x<<" ";
    return 0;
}
