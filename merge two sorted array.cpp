#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int n = nums1.size();
    int m = nums2.size();
    cout<<m;
    for(int i = 0; i<nums2.size();i++)
    {
        nums1[m+i]=nums2[i];
    }
    sort(nums1.begin(),nums1.end());
    for(int i = 0; i<nums1.size();i++)
    {
        cout<<nums1[i];
    }

    return 0;

}
