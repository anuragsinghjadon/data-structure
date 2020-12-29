#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long pc;
		long pr;
		cin>>pc;
		cin>>pr;

		if((pc<10) && (pr<10))
		{
			cout<<1<<" "<<1<<endl;
			continue;
		}
		if((pc<10) && (pr>10))
        {
            cout<<0<<" "<<1<<endl;
            continue;
        }
        if((pc>10) && (pr<10))
        {
            cout<<1<<" "<<1<<endl;
             continue;
        }

    long temp1 = 1;
		long temp2 = 1;

		temp1 = pc/9;
		temp2 = pr/9;
		if((pc%9) != 0)
			temp1+=1;

		if((pr%9) != 0)
			temp2+=1;

		if(temp1 < temp2)
			cout<<0<<" "<<temp1<<endl;
		else
			cout<<1<<" "<<temp2<<endl;
	}
	return 0;
}
