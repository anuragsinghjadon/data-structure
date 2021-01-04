#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            int n,k;
            cin>>n>>k;
            long long int a[n];
            long long int b[n];

            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                b[i] = a[i];
            }
            int j =0;
            int flag =2 ;
            for(j=0;j<n ;j++)
            {
                int carry = a[j] - k;
                if(carry<0)
                {
                    flag = 0;
                    break;
                }
                if(j==n-1)
                {
                    flag = 1;
                    break;
                }
                a[j+1]+=carry;
            }

            if(flag==0)
            {
                cout<<(j+1)<<endl;
                continue;
            }
            int sum =0;
            if(flag == 1)
            {
                sum+=accumulate(b,b+n,0);
                sum = ((sum/n)+1);
                cout<<sum<<endl;
                continue;
            }
        }
    return 0;
}


