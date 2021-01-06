#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int T;
	cin>>T;
	while(T--)
	{
	    stack <char> s;
	    string a;
	    cin>>a;
	    int n,i,j,c; c=0;
	   n= a.length();

	    for(i=0;i<n;i++)
	    {
	        if(a[i]=='<')
	        s.push(a[i]);
	        if(a[i]=='>'&&!s.empty())
	        {
	            if(s.top()=='<')
	            {
	                s.pop();
	                c=c+2;
	            }
	        }
	    }
	    cout<<c<<endl;

	}


	return 0;
}
