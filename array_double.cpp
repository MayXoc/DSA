#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i = 0; i<10 ; i++){
		cin>>arr[i];
		arr[i]=arr[i] * 2;
	}
	for(int i = 0; i<10;i++){
		cout<<"here after double - "<<arr[i]<<endl;
	}
	
	
}
