/*#include<bits/stdc++.h>

using namespace std;


int maxSum(int  a[], int n)
{
    int msf = 0 ;
    int mxe = 0;
    for(int i=0;i<n;i++)
    {
        mxe = mxe + a[i];
        if(mxe <  0)
            mxe = 0;
        else if(msf<mxe)
        {
            msf = mxe;
        }

    }
    return msf;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];
    int ans  = maxSum(a,n);
    cout<<ans<<"\n";
    return 0;
}
*/
#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size)
{
int msf = a[0];
int cm = a[0];

for (int i = 1; i < size; i++)
{
		cm = max(a[i], cm+a[i]);
		cout<<cm<<"\n";
		msf = max(msf, cm);
		cout<<msf<<"\n";
}
return msf;
}

int main()
{
    int n;
    cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int max_sum = maxSubArraySum(a, n);
cout << max_sum<<"\n";
return 0;
}
