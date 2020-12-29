#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		long  n;
		cin>>n;
		long   a[n];
		for(long i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);
		long max_value = a[0];
		for(long i=1;i<n;i++)
		{
			long j = i-1;
			long store = accumulate(a,(a+j+1),0) - accumulate(a+i,a+n,0);

			max_value = max(abs(store),max_value);
		}
		cout<<max_value<<endl;
	}

	return 0;
}
