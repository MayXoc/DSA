#include <iostream>
using namespace std;
void Transpose(int arr[][3],int row,int col,int Target){
	int temp;
	cout<<"Array before Transpose -"<<endl;
for(int i=0;i<row;i++){
	cout<<"|";
	for(int j=0;j<col;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<"|"<<endl;
}
cout<<"Array after Transpose -"<<endl;
for(int i=0;i<row;i++){
for(int j=i;j<col;j++){
	temp = arr[i][j];
	arr[i][j]=arr[j][i];
	arr[j][i]=temp;
}	
}
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
	int target =7;
	Transpose(arr,r,c,target);
}
