#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k ;
        cin>>n>>k;
        ll a[n];
        ll counter = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll i;
        for(int  i =0; i<n;i++)
        {
            if(a[i]<k)
                break;
            if(a[i]>=k)
            {
                counter++;
                int carry = a[i] - k;
                a[i]+=carry;
            }
        }

        if(i==n)
            counter+=(a[n-1]-k/k);

            cout<<counter+1<<endl;

    }
    return 0;
}
