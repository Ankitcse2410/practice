#include <bits/stdc++.h>
using namespace std;
//the time complexity of the solution is O(Count).
int main()
{
	int n,count=0; cin>>n;
	while(n!=0)
	{
		count++;
		n = n/10;
	}
	cout<<count<<endl;
}
/*
#include<bits/stdc++.h>
using namespace std;
//the time complexity of the solution is O(1).
int main(){
    int n; cin>>n;
    int k = floor(log10(n) + 1);
    cout<<k<<endl;
}
*/