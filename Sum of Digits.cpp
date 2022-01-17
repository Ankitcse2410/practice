#include"iostream"
using namespace std;
int main(){
	int i,T,N,rem;
	cin>>T;
	for(i=1;i<=T;i++){
		cin>>N;
		int sum=0;
		while(N!=0){
			rem=N%10;
			sum=sum+rem;
			N=N/10;
		}
		cout<<sum<<"\n";
	}
}
