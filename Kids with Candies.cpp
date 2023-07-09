#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> candies = {2,3,5,1,3};
    int extracandies = 3;
    vector<bool>res;
    int max_ele = 0;
    for(int i = 0; i<candies.size();i++)
    {
        if(candies[i]>max_ele)
            max_ele = candies[i];
    }
    cout<<max_ele<<endl;
    for(int i = 0; i<candies.size();i++)
    {
        if((candies[i]+extracandies)>=max_ele)
            res.push_back(true);
        else
            res.push_back(false);
    }
    for(auto x : res)
        cout<<x<<" ";
    return 0;
}
