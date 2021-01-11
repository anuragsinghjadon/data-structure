#include<bits/stdc++.h>

using namespace std;

/*int swap(int *ar, int *ap)
{
	int temp = *ap;
	*ap = *ar;
	*ar = temp;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n==1)
        {
            if( a[0]%2!=0)
                cout<<-1<<endl;
            else
                cout<<0<<endl;
            continue;
        }

		int count = 0, exit = 1;
		for(int i=0;i<n;i++)
		{
			if((a[i]%2==0 && i%2!=0) || (a[i]%2!=0 && i%2 ==0 )
			{
				for(int j = i+1 ; j<n; j++)
				{
					if(a[j]%2!=0 && j%2==0)
					{
						swap(a[j],  a[i]);
						count++;
						break;
					}
					if(a[j]%2==0 && j%2!=0)
					{
						swap(a[j],a[i]);
						count++;
						break;
					}
					else
					{
						exit = 0;
						break;
					}
				}

			}
				if(exit==0)
				{
					break;
				}
		}
		if(exit==0)
		{
			cout<<-1<<endl;
			continue;
		}
		else
			cout<<count<<endl;
	}
	return 0;
}*/
