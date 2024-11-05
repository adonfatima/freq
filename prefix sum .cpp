#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int prefix[100000];
int main()
{
   int arr[5];
   int prefix[5];
   prefix[0]=arr[0];
   for(int i=1;i<5;i++){
    prefix[i]=prefix[i-1]+arr[i];
   }
   for(int i=0;i<5;i++){
    cout<<prefix[i]<<" ";
   }
}
