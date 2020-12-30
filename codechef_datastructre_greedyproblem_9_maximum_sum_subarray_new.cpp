#include<bits/stdc++.h>
using namespace std;
long long int max(long long int a,long long int b)
{
     if(a>b)
     return a;
     else
     return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n],f[n],b[n],curr,max1,ans,i;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
        }
        f[1]=a[1];
        curr=a[1];
        for(i=2;i<=n;i++)
        {
            curr=max(curr+a[i],a[i]);

            f[i]=curr;
        }
        b[n]=a[n];
        curr=a[n];
        max1=a[n];
        for(i=n-1;i>=1;i--)
        {
            curr=max(curr+a[i],a[i]);
            b[i]=curr;
            max1=max(curr,max1);
        }
        ans=max1;
        for(i=2;i<n;i++)
        {
            ans=max(ans,f[i-1]+b[i+1]);
       }

        printf("%lld\n",ans);
    }
    return 0;
}
