#include<bits/stdc++.h>

using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the order of the matrix : ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Input the matrix elements : ";
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0,max_sum = 0,index;
    cout<<"Sum of rows is ";
    for(int i=0;i<row;i++)
    {
        sum = 0;
        for(int j = 0; j<col;j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
        if(sum>max_sum)
        {
            max_sum = sum;
            index = i;
        }
    }
    cout<<endl<<"Row "<<index+1<<" has maximum sum";

    sum = 0,max_sum = 0;

    cout<<endl<<"Sum of columns is ";
    for(int i = 0; i<row;i++)
    {
        sum = 0;
        for(int j = 0; j<col; j++)
        {
            sum = sum+arr[j][i];
        }
        cout<<sum<<" ";
        if(sum>max_sum)
        {
            max_sum = sum;
            index = i;
        }

    }
    cout<<endl<<"Column "<<index+1<<" has maximum sum";
    return 0;
}
