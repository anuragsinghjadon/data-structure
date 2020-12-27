#include<iostream>

using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        int  n,i,j;
        cin>>n;
        int  a[n];
        int  ans=0;
        int  v[n];
        for( i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
               v[ans] = i;
               ans++;

             }

        }
        string s="NO";

       if(ans  == 1)
            s = "YES";
        else
       {
        for( j=0; j < (ans-1); j++)
            {
                if(v[j+1] - v[j] >=6 )
                    s = "YES";

                else
                    s= "NO";
            }

            }
                cout<<s<<'\n';

        }
    return 0;
}


