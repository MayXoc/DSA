#include <iostream>
using namespace std;
bool LinearSearch(int arr[][3],int row,int col,int Target){
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		if(arr[i][j]==Target){
			cout<<"Desired value location -"<<"A["<<i<<"]"<<"["<<j<<"]";
			return true;
		}
	}
}
return false;	
}

int main(){
	int arr[3][3] = {
	{1,1,1},{2,2,2},{7,3,3}
	};
	int r=3;
	int c=3;
	int target =7;
	LinearSearch(arr,r,c,target);
}
