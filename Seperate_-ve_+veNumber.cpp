#include <iostream>
#include <vector>
using namespace std;
void Seperate(int arr[],int size){
//	 int arr[7]={5,-7,4,-3,2,-4,8};
//    int j =0;
//	for(int i=0;i<7;i++){
//		if(arr[i]>0){
//			continue;
//		}
//		else if(arr[i]<0){
//			swap(arr[j],arr[i]);
//			j++;
//		}
//	}
//	for(int i=0;i<7;i++){
//		cout<<arr[i]<<" , ";
//	}
	int start =0;
	int end = size-1;
	while(start<end){
		if(arr[start]<0){
			start++;
			continue;
		}
		else if(arr[end]>0 ){
			end--;
			continue;
		}
		else if(arr[start]>0 && arr[end]<0){
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}
}
int main(){
	int arr[9]={7,-9,3,-4,6,-3,8,4,5};
	Seperate(arr,9);
}

