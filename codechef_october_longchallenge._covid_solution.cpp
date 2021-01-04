#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,k,x,y;
        cin>>n>>k>>x>>y;

        if(x==y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int temp = x;
        while(1)
        {
            x = (x+k)%n;
            if(y==x)
            {
                cout<<"YES"<<endl;
                break;
            }
            if(temp==x)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
