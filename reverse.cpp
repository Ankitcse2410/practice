#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n]; cin>>arr;
	    for(int i=n;i>0;i--){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}