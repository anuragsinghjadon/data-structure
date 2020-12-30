#include<bits/stdc++.h>

int main()
{
   std::cout<<"enter value of t ";
    int t ;
    std::cin>>t;
    while(t--)
    {

        int n,k;
        std::cin>>n>>k;
        int a[n];
        std::cout<<"enter values ";
        for(int i=0;i<n;i++)
            std::cin>>a[i];

        std::sort(a,a+n);
        std::cout<<std::abs(std::accumulate(a+(n-k-1) , a+n,0)  - std::accumulate(a,a+(n-k-1),0))<<"\n";
    }


    return 0;
}
