#include <iostream>
using namespace std;
int main(){
	int a[]={10,20,30};
	int n=3;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"("<<a[i]<<","<<a[j]<<")"<<",";
		}
		cout<<endl;
	}
	
	
}
