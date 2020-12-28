#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int getvalue(ll x)
{

int cnt = 0;
    while(x%2==0)
    {
        cnt++;
        x /=2;
    }

    for(int i=3;i<=sqrt(x);i+=2)
    {
        if(x%i==0)
        {
            cnt++;
            x /=i;
        }
    }
    if(x > 1) cnt++;

    return cnt;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k, x;
        cin>>x>>k;
           int cnt = getvalue(x);
           if(cnt>=k)
            cout<<"1"<<"\n";
           else
            cout<<"0"<<"\n";

    }
    return 0;
}
