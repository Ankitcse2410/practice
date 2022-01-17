#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int s=0,s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        int x,y,z; cin>>x>>y>>z;
        s += x;
        s1 += y;
        s2 += z;
    }
    if(s==0 && s1==0 && s2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}