#include<bits/stdc++.h>
using namespace std;
bool isChocolate(string s){
    string p="chocolate";
    int cnt=0;
    for(char c:s){
        if(c==p[cnt]){
            cnt++;
        if(cnt==p.size()){
        return true;
    }
    }
    }
    return false;
}
int main()
{
    string i;
    cin>>i;
    if(isChocolate(i)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
