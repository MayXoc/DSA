#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-(i+1);j++){  // printing required space
			cout<<" ";
	    }
		for(int j=0;j<i+1;j++){  //printing * with space 
			cout<<"* ";
		}
	cout<<"\n";
}
}
