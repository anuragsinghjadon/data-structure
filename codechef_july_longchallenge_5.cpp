#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);

		if(x >=a[n-1])
		{
			cout<<n;
			continue;
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i] < x)
			{
				x = x*2;

				cnt++;
			}
			else
			{
				while(a[i]>0)
				{
					a[i] = a[i]-x;
					x = x*2;
					a[i] = a[i] *2;
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
