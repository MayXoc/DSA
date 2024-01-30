#include <iostream>
using namespace std;
void printArray(int arr[][3],int row,int col){	
for(int i=0;i<row;i++){
	cout<<"|";
	for(int j=0;j<col;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<"|"<<endl;
}
}
int main(){
	int arr[3][3] = {
	{1,1,1},{2,2,2},{3,3,3}
	};
	int r=3;
	int c=3;
	printArray(arr,r,c);
}
