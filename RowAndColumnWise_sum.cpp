#include <iostream>
#include <vector>
using namespace std;
void print(int arr[][4],int size){
	for(int i =0;i<size;i++){
		cout<<"|";
		for(int j = 0;j<size;j++){
			cout<<arr[i][j]<<",";
		}
		cout<<"|"<<endl;
	}
}
void Row_wise_sum(int arr[][4],int size){
	for(int i =0;i<size;i++){
		int sum=0;
		for(int j = 0;j<size;j++){
			sum=sum+arr[i][j];
		}
		cout<<"\nHere row wise sum -"<<sum<<endl;
	}
}
void Column_wise_sum(int arr[][4],int size){
	for(int i =0;i<size;i++){
		int sum=0;
		for(int j = 0;j<size;j++){
			sum=sum+arr[j][i];
		}
		cout<<"\nHere column wise sum -"<<sum<<endl;
	}
}
int main(){
	int arr[][4]={
	{1,2,3,4},
	{4,3,2,1},
	{2,3,1,4},
	{1,4,2,3}
	};
	print(arr,4);
	Row_wise_sum(arr,4);
	Column_wise_sum(arr,4);
}
