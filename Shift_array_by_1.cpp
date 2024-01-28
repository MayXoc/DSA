#include <iostream>
using namespace std;
void Shift(int arr[],int n){
	int Temp = arr[n-1];
	for(int i=0;i<n;i++){
	arr[n-i-1] = arr[n-i-2];	
	}
	arr[0]=Temp;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[]={2,4,5,6,7,8,9};
	int n=7;
	Shift(arr,n);
    
}
