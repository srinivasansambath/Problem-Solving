#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums = {-4,-1,0,3,10};
    int n = nums.size();
    for(int i = 0; i<n; i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    for(auto i : nums)
        cout<<i<<" ";
}
