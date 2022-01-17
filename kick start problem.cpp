#include<bits/stdc++.h>
using namespace std;

int solve(string &s,int n,int k){
    int c=0,i=0,m=k,x=n/2;
    while(x>0){
        if(s[i]!=s[n-i-1]) c+=1;
        i+=1;
        x-=1;
    }
    return abs(m-c);
}

int main(){
    int t; cin>>t;
    
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        int k; cin>>k;
        string str; cin>>str;
        cout <<"Case #"<<i<<": "<<solve(str,n,k)<<endl;
        
    }
    return 0;
}
