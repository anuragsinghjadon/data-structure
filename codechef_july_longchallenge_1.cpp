#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans =0;
		for(int i=1;i<n;i++)
			{
				ans+= abs(a[i]-a[i-1])-1;
			}
			if(ans<0)
				cout<<'0'<<endl;
			else
				cout<<ans<<endl;

	}
	return 0;
}
