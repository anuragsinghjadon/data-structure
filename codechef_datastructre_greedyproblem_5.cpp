#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   unsigned int t;
    cin>>t;
    while (t--)
{
      unsigned  int n,m;
        cin>>n>>m;
       unsigned int a[m];
      unsigned  int ans=0;
        for(unsigned int i=0;i<m;i++)
            cin>>a[i];

    sort(a,a+m);
   // for(int i=0;i<m;i++)
//        cout<<a[i]<<" "

            for(unsigned int i=0;i<(m-1);i++)
            {
                if(a[i]==a[i+1])
                    continue;
                else
                {
                    ans+=1;
                }

            }
        cout<<(ans+1)<<"\n";


    }

    return 0;
}
