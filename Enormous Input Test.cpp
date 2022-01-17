#include <iostream>
using namespace std;
int main() {
	int n,k,t,count=0;
	cin>>n>>k;//n = no. of i/p; k = divisible by this number; x is the dividend 
	for(t=0;t<n;t++){
		int x; cin>>x;
		if(x%k==0){
			count++;
		}
	}
	cout<<"\n"<<count<<endl;
	return 0;
}
