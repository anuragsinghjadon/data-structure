#include<iostream>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            int n,k;
            cin>>n>>k;
            int a[n+1];
        for(int i=1;i<=(n-k);i++)
            a[i] = -i;

        for(int i=(n-k+1);i<=n;i++)
            a[i] = i;

        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";

        cout<<endl;
        }
    return 0;
}
