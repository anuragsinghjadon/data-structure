#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i < n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        set<ll> s(v.begin(),v.end());
        if(v[0]==0)
        {
            cout<<s.size()-1<<endl;
        }
        else
            cout<<s.size()<<endl;

    }
    return 0;
    }
