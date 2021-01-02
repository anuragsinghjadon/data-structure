#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	assert(t<=100);
	while(t--)
	{
	    int n;
		string s;
		cin>>s;
        n = s.length();
        assert(n<=10e5);
        int cnt=0;
		for(int i=0;i<n-1;)
		{
            if(s[i]=='x' && s[i+1]=='y' || s[i]=='y' && s[i+1]=='x')
            {
                cnt++;
                i = i+2;
            }
            else
                i++;
	}
	cout<<cnt<<endl;
	}
	return 0;
}
