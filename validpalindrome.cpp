//valid palindrome
#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/remove-characters-alphabets-string/
int main()
{
    string str = "A man, a plan, a canal: Panama";
    string ans = "";
    for(auto ch : str)
    {
        if(isalpha(ch))
        {
            ans += ch;
        }
    }
    cout<<ans<<endl;
    transform(ans.begin(),ans.end(),ans.begin(),::tolower);
    cout<<ans;
    str = ans;
    reverse(ans.begin(),ans.end());
    cout<<ans;
    int x;
    x = ans.compare(str);
    if(x==0) cout<<"True";
    else cout<<"False";
    return 0;
}
