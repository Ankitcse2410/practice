//bubble sort program for practice
#include"iostream"
using namespace std;
void bubble_sort(int A[],int N){
	int pass,i,temp,flag;
	for(pass=1;pass<=N-1;pass++){
		flag=0;
		for(i=0;i<=N-1-pass;i++){
			if(A[i]>A[i+1]){
				flag=1;
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		if(flag==0){
			break;
		}
	}
}
int main(){
	int i,N;
	cin>>N;
	int A[N];
	cout<<"\n"<<endl;
	for(i=0;i<=N-1;i++){
		cin>>A[i];
	}
	bubble_sort(A,N);
	cout<<"\n"<<endl;
	for(i=0;i<N;i++){
		cout<<A[i]<<"\t";
	}
	return 0;
}
