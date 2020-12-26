#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
 for(int i = 1 ; i<= test;i++)
 {
     int n, k ;
      cin >>n;
      cin>>k;
      int arr[101];
      for(int  j = 0; j<n ; j++)
          cin>>arr[j];

     sort(arr,arr+n);

     long long int sum1=0;
     long long int sum2 = 0; ;
     if(k>n/2)
     k=n-k;
      for(int l =0 ; l<n;l++)
      {
          if(l<=k-1)
          sum1=sum1+arr[l];
          else
          sum2 = sum2 + arr[l];
      }
      cout<<(sum2-sum1)<<endl;


 }
}
