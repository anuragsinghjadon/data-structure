#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
       ll t;
        cin>>t;
        while (t--)
        {
            ll n,num=0;
            cin>>n;
          ll a[n];

            for(ll i=0;i<n;i++)
            {
                cin>>a[i];

                if(a[i]==0)
                    num++;
            }
            sort(a, a+n , greater() ) ;

            for(int i=0;i<n;i++)
                cout<<a[i];


             /*ll sum = accumulate(a.begin(),a.end(),0);
            n = n-num;
           ll ans=0;

            if(sum > ((n-1)*n/2))
            {
                ans = sum -  ((n-1)*n/2);
            }
            else
            {
                ans = sum -n;
            }
            cout<<ans<<"\n"; */

        }

 return 0;
}
