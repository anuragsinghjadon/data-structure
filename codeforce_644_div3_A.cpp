#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int calculated_area = 2*(a*b);

		int required_area = min(a,b);
		required_area = 2*(required_area);
		required_area *= required_area;

		if(calculated_area<=required_area)

			{
				cout<<required_area<<endl;
				continue;
			}
		else

		{
			required_area = max(a,b);
			required_area = pow(required_area,2);
			cout<<required_area<<endl;
		}


	}
	return 0;

}
