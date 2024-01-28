#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n = 12;
	int arr[]={1,1,0,0,1,1,0,0,1,1,0,0};
	int end = n;
	cout<<"Array before short"<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<",";
	}
	for(int i=0;i<n/2;i++){
		int end = n;
		for(int j=0;j<(n/2)+1;j++){
			
			if(arr[i]==0){
				break;			
			}
			else if(arr[i]==1 && arr[end-1]==0){
				swap(arr[i],arr[end-1]);
				break;
			}
			else if(arr[i]==1 && arr[end-1]==1){
				end--;
				continue;
			}
		}
	}
	cout<<"\n Array after short"<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<",";
	}
	 
}
