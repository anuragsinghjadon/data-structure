#include<bits/stdc++.h>
using namespace std;
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n

    return 0;

}




/*#include<iostream>
#include<vector>

using namespace std;

int oddEvenValue(int n)
{
    // array to store binary number
    vector<int>a;
    int i = 0;
    int k;
    while (n > 0)
        {

        // storing remainder in binary array
        a.push_back(n%2);
        n = n / 2;
        i++;
    }

    for(int j=0;j<i;j++)
        if(a[i]==1)
            k++;

return k;
}

int main()
{
    int a[100],t;
    cout<<"enter test cases ";
    cin>>t;
    while(t--)
    {
        int n,q,k=0,j=0;
        cout<<"enter n and q"<<endl;
        cin>>n>>q;
        cout<<"enter values in array ";
        for(int i=0;i<n;i++)
            cin>>a[i];

        while(q--)
        {
            int res , p ;
            cout<<"enter p";
            cin>>p;
            for(int i=0;i<n;i++)
            {
                res = p^a[i];
                if(oddEvenValue(res)%2==0)
                    k++;
                else
                    j++;
            }
        }
        cout<<j<<" "<<k;
    }


    return 0;
}
*/
