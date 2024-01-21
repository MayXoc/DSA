#include <iostream>
#include <vector>
using namespace std;
void DiagonalSum(int arr[][4]){
	int sum1=0;
	int sum2 = 0;
	int n=3;
	for(int i=0;i<4;i++){
		sum1=sum1+arr[i][i];
		sum2 = sum2+arr[n][i];
		n--;
	}
	cout<<"1st diagonal sum = "<<sum1<<endl;
	cout<<"2nd diagonal sum = "<<sum2<<endl;
	
}
int main(){
	int arr[][4]={{2,4,5,6},
	              {3,6,5,7},
	              {7,8,9,5},
				  {9,8,5,6}
	};
	DiagonalSum(arr);
}
