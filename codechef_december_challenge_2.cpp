#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long x, y;
        long x_odd=0, x_even=0,y_odd=0,y_even=0;
        cin>>x>>y;
        if((x%2==0) && (y%2==0))
        {
            x_odd = x/2;
            x_even = x_odd;
            y_odd = y/2;
            y_even = y_odd;
        }
        else if((x%2==0) && (y%2!=0))
        {
            x_odd = x/2;
            x_even = x_odd;
            y_odd = y/2+1;
            y_even = y/2;
        }
        else if((x%2!=0) && (y%2!=0))
        {
            x_odd = x/2+1;
            x_even = x/2;
            y_odd = y/2+1;
            y_even = y/2;
        }
        else
        {
            x_odd = x/2+1;
            x_even = x/2;
            y_odd = y/2;
            y_even = y_odd;
        }
        cout<<(x_odd*y_odd+x_even*y_even)<<endl;
    }
}
