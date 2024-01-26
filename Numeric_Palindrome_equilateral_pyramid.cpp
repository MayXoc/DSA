#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		int b=1;
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){	
			if(j<i+1){
				cout<<j+1;
				a=j+1;
			}
			else{
				cout<<a-b;
				b++;
			}
		}
		cout<<endl;
	}
}
