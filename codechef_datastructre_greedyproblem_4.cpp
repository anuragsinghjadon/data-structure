#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n1 , n2, m ;
        cin>>n1>>n2>>m;

        for(ll i=1;i<=m;i++)
        {
            if((n1-i)>=0 && (n2-i)>=0)
            {
                n1 -=i;
                n2 -=i;
            }
            else
                break;
        }

        cout<<n1+n2<<"\n";
    }

    return 0;
}
