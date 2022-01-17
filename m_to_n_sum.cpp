#inlude<iostream>
using namespace std;
int main(){
	int n,m,i,sum=0; cin>>m>>n;
	i=m;
	while(i<=n){
		sum+=i;
		i++;
	}
	cout<<sum<<endl;
}