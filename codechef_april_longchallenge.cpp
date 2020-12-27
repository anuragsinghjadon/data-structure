#include<iostream>
#include<numeric>
#define ll long long
#define modulo 1000000007
using namespace std;

int main()
{
    // added the two lines below
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
                if(a[i] == 0)
                    num++;
            }

            ll sum = accumulate(a,a+n,0);
            n = n- num;
            ll ans=0;

            if( sum  > ((n-1)*n/2))
                ans = sum- ((n-1)*n/2);

            else

                {
                    ans = sum - n;
                    if(ans==0)
                        ans = 1;

                }

            cout<<(ans%modulo)<<"\n";

        }



 return 0;
}
