#include <iostream>
#include <vector>
using namespace std;
void min_max(int arr[],int n){
	int mini = n;
	int maxi = 0;
	for(int i = 0 ;i<n;i++){
			mini = min(arr[i],mini);
			maxi = max(arr[i],maxi);
	}
	cout<<"Minimum = "<<mini<<endl;
	cout<<"Maximum = "<<maxi<<endl;
}
int main(){
	int arr[6]={2,4,5,1,7,8};
	min_max(arr,5);
}