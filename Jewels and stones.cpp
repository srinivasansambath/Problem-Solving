#include<bits/stdc++.h>

using namespace std;

int main()
{
    string jewel = "z";
    string stone = "ZZ";
    int count = 0,i,j;
    for(i = 0; jewel[i]!='\0';i++)
    {
        for(j = 0; stone[j]!='\0';j++)
        {
            if(jewel[i]==stone[j])
                count++;
        }
    }
    cout<<"The count is : "<<count;
    return 0;

}
