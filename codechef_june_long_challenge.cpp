#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int ans = accumulate(a,a+n,0);
	for(int i=0;i<n;i++)
		if(a[i]>k)
			a[i] = k;

	int temp = accumulate(a,a+n,0);

	cout<<ans-temp<<endl;

	}
	return 0;
}
