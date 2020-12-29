#include<iostream>
#include<math.h>

int main()
{

    int t ;
    std::cin>>t;
    while(t--)
    {
    int i=0 ,p ;
       std::cin>>p;
   while(p!=0)
    {

        int n = (log(p)/log(2)) ;
        if(n <= 11)
         {
            p = p - pow(2,n);
                i++;
         }
         else
         {
             p = p - pow(2,11);
             i++;
         }
    }
    std::cout<<i<<"\n";
}


    return 0;
}
