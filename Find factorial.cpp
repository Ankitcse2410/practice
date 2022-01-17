// Find the fictorial that taken by user
// question link given below:-
// https://practice.geeksforgeeks.org/problems/factorial5739/1
#include<bits/stdc++.h> 
using namespace std;
#define ll long long int
class Solution{
public:
    ll factorial(int N)
    {
        ll fact=1;
        for(int i=1;i<=N;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}