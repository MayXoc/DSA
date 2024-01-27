#include <iostream>
#include <vector>
using namespace std;
void FindMaxRow(int arr[][4]){
	int arr1[4];
	int max=0;
	for(int i=0;i<4;i++){
		int count=0;
		for(int j=0;j<4;j++){
			if(arr[i][j]==1){
				count++;
			}
		}
		arr1[i]=count;
	}
	int maxOne= arr1[0];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(arr1[i]>maxOne){
				maxOne=arr1[i];
				max=i;
			}
		}
	}
    // max+1 represent row index and maxone represent number of ones in that row
	cout<<"Here is your maximum row - "<<"["<<max+1<<","<<maxOne<<"]"; 
}
int main(){
	int arr[][4]={{0,0,1,1},
	              {0,1,0,1},
				  {0,0,1,1},
				  {1,1,1,0}
				 };
	FindMaxRow(arr);			 
}
