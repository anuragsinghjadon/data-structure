#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int health ;
		int power;
		cin>>health>>power;
		while(health>0)
		{
			health = health - power;
			power/=2;
			if(power ==0)
			{
				break;
			}
		}
		if(health > 0 && power==0)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
	return 0;
}
