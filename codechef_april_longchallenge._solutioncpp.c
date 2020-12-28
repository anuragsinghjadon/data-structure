#include <bits/stdc++.h>
using namespace std;

int main()
{
    // added the two lines below
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
        int t;
        cout<<"enter t ";
        cin>>t;
        while (t--)
        {
            int n,num=0;
            cout<<"enter n ";
            cin>>n;
            int a[n];

            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==0)
                    num++;
            }
            sort(a,a+n);

            n = n-num;
            int ans=0;
            if( accumulate(a,a+n)>((n-1)*n/2))
            {
                ans = accumulate(a,a+n)- ((n-1)*n/2)
            }
            else
            {
                ans = accumulate(a,a+n)-n;
            }
            cout<<n<<"\n";

        }



 return 0;
}
