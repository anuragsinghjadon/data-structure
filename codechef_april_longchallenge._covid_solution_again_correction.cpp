#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0)

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        vector<int> index;
        for(int i=0;i<n;i++)
        {
         int x;
         cin>>x;
         v.push_back(x);
         if(x==1)
            index.push_back(i);
        }
        int flag = 1;
        for(int i=1;i<index.size();i++)
        {
            if(index[i]-index[i-1] < 6)
            {
                flag = 0;
                break;
            }

        }

        if(flag == 0)
                cout<<"NO"<<"\n";

        else
            cout<<"YES"<<endl;


    }


    return 0;
}
