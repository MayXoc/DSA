#include <iostream>
#include <vector>
using namespace std;
 
void reverse(int arr[],int n){
	int arr1[n];
	cout<<"before reverse = "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		arr1[i] = arr[n-1-i];
	 }
	cout<<"\n reversed array = "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	 }
}

int main(){
	int arr[6]={2,4,5,1,7,8};
	reverse(arr,6);

}