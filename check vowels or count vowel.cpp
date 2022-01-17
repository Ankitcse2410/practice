#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int cnt=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            cnt++;
            cout<<str[i]<<" at index "<<i<<endl;
        }
    }
    cout<<"Total vowel present in the above word or sentence : "<<cnt<<endl;
}