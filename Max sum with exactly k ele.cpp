#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums={5,5,5};
    int k = 2;
    int max_ele;
    int sum = 0;
    int index;
    while(k)
    {
        max_ele = 0;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]>max_ele)
            {
                max_ele = nums[i];
                index = i;
            }
        }
        nums[index]=nums[index]+1;
        sum = sum + max_ele;
        k--;
    }
    cout<<sum;
}
