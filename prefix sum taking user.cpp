#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5];
    int prefix[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    prefix[0]=arr[0];
    for(int i=1;i<5;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    return 0;
}
