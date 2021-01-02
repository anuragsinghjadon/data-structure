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
        ll a[n],b[n];
        ll c, sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]>9)
            {
                    while(a[i]!=0)
                    {
                        sum+=a[i]%10;
                        a[i]/=10;
                    }
                    a[i] = sum;
                    sum =0;
                }
            }

    for(ll i=0;i<n;i++)
        {
            if(b[i]>9)
            {
            while(b[i]!=0)
            {
                        sum+=b[i]%10;
                        b[i]/=10;
            }
                    b[i] = sum;
                    sum =0;

            }
        }

        ll chef =0, morty = 0;

    for(ll i=0;i<n;i++)
    {

        if(a[i]>b[i])
            chef++;
        else if(b[i]>a[i])
            morty++;
        else
        {
            chef++;
            morty++;
        }


    }
    if(chef>morty)
    {
         cout<<"0"<<" "<<chef<<endl;
         continue;
    }
    else if(morty > chef)
    {
        cout<<"1"<<" "<<morty<<endl;
        continue;
    }
    else
    {
        cout<<"2"<<" "<<chef<<endl;
        continue;
    }

    }


    return 0;
}

