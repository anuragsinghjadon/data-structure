#include<iostream>
#include<algorithm>
using namespace std;

struct  Job
{
    int detail;
    int profit;
    char type;
};

bool jobdata(Job s1, Job s2)
{
    /* data */
    if(s1.detail==s2.detail)
        return s1.profit<s2.profit;

    return s1.detail<s2.detail;


}



int main()
{
   int n;
   cout<<"entre n "<<endl;
   cin>>n;
    Job a[n];
    cout<<"enter value of array 1. type 2. detail 3. profit  ";

    for(int i=0; i<n;i++)
        cin>>a[i].type>>a[i].detail>>a[i].profit;

    sort(a,a+n,jobdata);
    cout<<"elements are in sorted oreder ";
    for(int i=0;i<n;i++)
        cout<<a[i].type<<" "<<a[i].detail<<" "<<a[i].profit<<endl;

       char c[n];
        int k=0;
    for(int j=1; j<n;j++)
    {
        if(a[j-1].detail != a[j].detail)
            {
                c[k] = a[j-1].type;
                k++;
            }
    }
    c[k+1] = '\0';

    for (int i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
