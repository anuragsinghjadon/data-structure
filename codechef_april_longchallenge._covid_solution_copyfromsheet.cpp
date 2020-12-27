#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
   cin>>t;
     while(t--)
     {  int n;
        cin>>n;
        int i,j,k;
        int flag=1;
        int * arr = new int[n]();
        for( i=0; i<n; i++)
        {
            cin>>arr[i];
        }
      for( j=0; j<n; j++)
      {
          if(arr[j]==1)
          {
              for( k=j+1; k<min(j+6,n); k++)
              {
                  if(arr[k]==1)
                  {
                    flag = 0;
                  cout<<"NO"<<endl;
                  break;
                  }

          }
       }
          if(flag == 0)
              break;
     }
      if(flag == 1)
          cout << "YES" << endl;
    }


     return 0;
 }
