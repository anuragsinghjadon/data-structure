#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
   ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll num=0;
sort(a,a+n);
for(ll i=0;i<n;)
 {
        if(a[i+1]-a[i]<=m)
        {
            num++;
            i+=2;
        }
            else
                    i++;
 }

    cout<<num<<endl;

return 0;
}
