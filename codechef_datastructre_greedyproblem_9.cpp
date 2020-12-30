#include<bits/stdc++.h>
using namespace std;
const long long MOD=1E9+7;
pair < double , int > logarr[100005];
pair < double ,int > logbrr[100005];
double sum1[100005];
double sum2[100005];
long long arr[100005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int co=0;
		int cou=0;
		int i,j;
		int n,k;
		long long maxi=-1E18;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			if(arr[i]==0)
			cou=1;
			if(arr[i]<=0)
			{
				co++;
				maxi=max(maxi,arr[i]);
			}
		}
		if(n==k)
		{
			long long answ=1;
			for(i=0;i<n;i++)
			{
				answ=(answ*arr[i])%MOD;
				if(answ<0)
				answ+=MOD;
			}
			printf("%lld\n",answ);
			continue;
		}
		if(co==n&&k==1)
		{
			if(maxi<0)
			maxi+=MOD;
			printf("%lld\n",maxi);
			continue;
		}
		else if(co==n&&k%2==1)
		{
			if(cou==1)
			{
				printf("0\n");
				continue;
			}
			for(i=0;i<n;i++)
			{
				logbrr[i].first=(log10((double)abs(arr[i])));
				logbrr[i].second=i;
			}
			long long answ=1,y;
			sort(logbrr,logbrr+n);
			for(i=0;i<k;i++)
			{
				int x=logbrr[i].second;
				y=arr[x];
				answ=(answ*y)%MOD;
				if(answ<MOD)
				answ+=MOD;
			}
			printf("%lld\n",answ);
			continue;
		}
		else if(co==n&&k%2==0)
		{
			if(cou==1)
			maxi=0;
			int h=0;
			for(i=0;i<n;i++)
			{
				if(arr[i]==0)
				continue;
				logbrr[h].first=(log10((double)abs(arr[i])));
				logbrr[h].second=i;
				h++;
			}
			long long answ=1,y;
			sort(logbrr,logbrr+h);
			reverse(logbrr,logbrr+h);
			if(k>h)
			{
				printf("0\n");
				continue;
			}
			for(i=0;i<k;i++)
			{
				int x=logbrr[i].second;
				y=arr[x];
				answ=(answ*y)%MOD;
				if(answ<MOD)
				answ+=MOD;
			}
			answ=max(maxi,answ);
			printf("%lld\n",answ);
		}
		else
		{
			int h=0;
			int h1=0;
			for(i=0;i<n;i++)
			{
				if(arr[i]>0)
				{
					logarr[h].first=(log10((double)abs(arr[i])));
					logarr[h].second=i;
					h++;
				}
				else if(arr[i]<0)
				{
					logbrr[h1].first=(log10((double)abs(arr[i])));
					logbrr[h1].second=i;
					h1++;
				}
			}
			if(cou==1&&h1+h<k)
			{
				printf("0\n");
				continue;
			}
			if(cou==1&&h1+h==k&&h1%2==1)
			{
				printf("0\n");
				continue;
			}
			sum1[h]=0;
			sum2[h1]=0;
			sort(logarr,logarr+h);
			sort(logbrr,logbrr+h1);
			for(i=h-1;i>=0;i--)
			{
				sum1[i]=logarr[i].first+sum1[i+1];
			}
			for(i=h1-1;i>=0;i--)
			{
				sum2[i]=sum2[i+1]+logbrr[i].first;
			}
			int xx=-1,uu=-1;
			double yy=0;
			j=k;
			for(i=0;i<=k;i+=2)
			{
				double zz,ww;
				if(i>h1)
				{
					j-=2;
					continue;
				}
				else
				zz=sum2[h1-i];
				if(h-j<0)
				{
					j-=2;
					continue;
				}
				else
				ww=sum1[h-j];
				if(yy<=zz+ww)
				{
					yy=zz+ww;
					xx=i;
					uu=j;
				}
				j-=2;
			}
			long long answ=1;
			for(i=h1-1;i>=h1-xx;i--)
			{
				int x=logbrr[i].second;
				answ=(answ*arr[x])%MOD;
				if(answ<0)
				answ+=MOD;
			}
			for(i=h-1;i>=h-uu;i--)
			{
				int x=logarr[i].second;
				answ=(answ*arr[x])%MOD;
				if(answ<0)
				answ+=MOD;
			}
			printf("%lld\n",answ);
		}
	}
	return 0;
}
