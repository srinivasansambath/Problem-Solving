#include<bits/stdc++.h>

using namespace std;
//input nums = {1,2,1} output ans = {1,2,1,1,2,1};

int main()
{
    vector<int>nums = {1,2,1};
    vector<int>res;
    int n = nums.size();
    for(int i = 0; i<n; i++)
    {
        res.push_back(nums[i]);
    }
    for(int i = 0; i<n; i++)
    {
        res.push_back(nums[i]);
    }
    for(auto i : res)
        cout<<i;
    return 0;
}


/*optimised solution
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int>res(n*2);
    for(int i = 0; i<n; i++)
    {
        res[i]=nums[i];
        res[n+i]=nums[i];
    }
    return res;
    }
};*/
