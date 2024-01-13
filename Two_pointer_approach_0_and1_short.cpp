#include <iostream>
using namespace std;
int main(){
	int arr[9]={0,1,0,1,0,1,0,1,0};
	int low=0;
	int high =8 ;
	int i =0;
	while(low<high){
		if(arr[low]==0) {
			low++;
			continue;
		}
		if(arr[low]==1 && arr[high]==1){
			high-- ;
		}
		if(arr[low]==1 && arr[high]==0) {
			swap(arr[low],arr[high]);
			low++;
			high --;
		}
			}
	 for(int i = 0;i<9;i++){
	 	cout<<arr[i]<<",";
	 }
}
