#include <iostream>
using namespace std;
int getuniq(int arr[],int n){
	int ans = 0;
	for(int i=0;i<n;i++){
		ans = ans^arr[i];
	}
	return ans;
}
int main(){
	int arr[]={2,10,11,13,10,2,11,13,4};
	int n = 9;
	int final = getuniq(arr,n);
	cout<<final;
}
