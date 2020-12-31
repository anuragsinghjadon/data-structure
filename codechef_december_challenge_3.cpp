#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int at_risk = 0;
        int low_risk = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=80 || a[i]<=9)
                at_risk++;
            else
                low_risk++;

        }
                int num_days=0;
                if((at_risk%d)==0)
                    num_days = at_risk/d;
                else
                    num_days = at_risk/d+1;
                if((low_risk%d)==0)
                    num_days+=low_risk/d;
                else
                    num_days+=low_risk/d+1;
                cout<<num_days<<endl;
    }

}
