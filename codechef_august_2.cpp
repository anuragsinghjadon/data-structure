#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
        long long  k;
		cin>>n>>k;
		long long a[n];
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long cnt = 0;
		for(long long i=0;i<n;i++)
		{
			if(a[i]<k)
			{
				if(k%a[i]==0)
				{
					cnt+=(k/a[i]) - 1;
				}
			}
			else
				break;
		}
		if(cnt==0)
			cout<<"-1"<<endl;
		else
			cout<<cnt<<endl;
	}

	return 0;
}
