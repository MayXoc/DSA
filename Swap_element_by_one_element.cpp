#include <iostream>
#include <vector>
using namespace std;

int main(){
	int arr[6]={10,20,30,40,50,60};
	int n =6;
	cout<<"Before swap - "<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<",";
	}
	for(int i=0;i<6-1;i++){
	swap(arr[n-1],arr[n-2]);
		
	cout<<"\n swap"<<arr[n-1]<<","<<arr[n-2];
	 n--;  
	}
	cout<<"\nafter swap"<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<",";
	}
	
	 
}
