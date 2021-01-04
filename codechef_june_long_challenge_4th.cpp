#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ts,js, c= 0;
		cin>>ts;
		int tc = ts;

		int store = 0;

		while(ts%2==0)
			 {
			 	store++;
			 	ts /=2;
			 }

			 js= pow(2,store+1);
			 if(js<=tc)
			 {
			 	c = tc/js;
			 }
			 cout<<c<<endl;

				}
	return 0;
}
