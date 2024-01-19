#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int Target){
int start =0;	
int end =size-1;
int mid=(start+end)/2;
while(start<=end){
	if(arr[mid]==Target){
		return mid;
	}
	else if(Target>arr[mid]){
		start=mid+1;
	}
	else if(Target<arr[mid]){
		end=mid-1;
	}
	mid=(start+end)/2;
}
return -1;
}
int main(){
	int arr []={1,2,3,4,5,6,7,8};
	int size = 8;
	int target =7;
	if(BinarySearch(arr,size,target)==1){
		cout<<"Element not found";
	}else{
	cout<<"here location -"<<BinarySearch(arr,size,target);	
	}
	
	
	
}
