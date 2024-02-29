#include<bits/stdc++.h>
using namespace std;

int freq[200000];
int arr[200000];
int main()
{
    int n;
    cin>>n;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
   /* 7
    10 5 6 3 2 1 1*/
    for(int i=0;i<n;i++)
    {
       int num=arr[i];
       freq[num]++;
    }
    for(int i=1;i<=maxi;i++)
    {
        cout<<i<<" occur "<<freq[i]<<endl;
    }

}
