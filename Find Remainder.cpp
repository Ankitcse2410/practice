#include"iostream"
using namespace std;
int main(){
	int i,T,A,B,rem;
	cin>>T;
	for(i=1;i<=T;i++){
		cin>>A>>B;
		rem=0;
		rem=A%B;
		cout<<rem<<"\n";
	}
	return 0;
}
