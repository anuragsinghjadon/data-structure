#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ll sum1[n],sum2[n];
	    memset(sum1,0,sizeof(sum1));
	    memset(sum2,0,sizeof(sum2));
	    ll maxm=0,pos=0;
	    sum1[0]=a[0];
	    for(int i=0;i<n;i++)
	    {
	        pos=max(a[i],pos+a[i]);
	        maxm=max(maxm,pos);
	        sum1[i]=pos;
	    }
	    maxm=a[n-1];
	    pos=a[n-1];
	    sum2[n-1]=a[n-1];
	    for(int i=n-2;i>=0;i--)
	    {
	        pos=max(a[i],pos+a[i]);
	        maxm=max(maxm,pos);
	        sum2[i]=pos;
	    }
	    ll ans=maxm;
	    for(int i=1;i<n-1;i++)
	    {
	        ans=max(ans,sum1[i-1]+sum2[i+1]);
	    }
	    cout<<ans<<"\n";
	}
    return 0;
}





