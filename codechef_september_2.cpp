#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1][n+1];

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
            }
        }
        int cnt=0;
        int temp =n;
        while(temp--)
        {
        if(a[1][n]==n)
            {
                n--;
                continue;
            }
            else
            {
                 int b[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j] = b[i][j];
        }
    }
                n--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
