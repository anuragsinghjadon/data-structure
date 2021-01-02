#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string y = "YES";
		string no = "NO";
		int a[n];
		if(n==1)
		{
			cin>>a[0];
			if(a[0]==5)
			{
				cout<<y;
			}
			else
				cout<<no;
		continue;
		}

		for(int i=0;i<n;i++)
            cin>>a[i];

	int five = 0, ten = 0, j=0;

	for(int i=0;i<n;i++)
	{
		if(a[0]==5)
        {
            if(a[i]==5)
			five++;

		if(a[i]==10)
		{
			ten++;
			five--;
			if(five < 0)
			{
				j = 1;
				break;
			}
		}

		if(a[i]==15)
		{
			if(ten>=1)
				ten--;
			else
			{
				if(five>=2)
					five = five-2;
				else
				{
					j=1;
					break;
				}
			}
		}

        }
        else
        {
         j=1;
        break;
        }

}

	if(j==1)
		cout<<no<<endl;
	else
		cout<<y<<endl;

	}
	return 0;
}
