#include <iostream>
#include <vector>
using namespace std;

int main(){
   int k = 3;
   int arr[7]={1,2,3,4,5,6,7};
   int temp;
   for(int i=0;i<k;i++){
     temp=arr[6];
   	 for(int j=6;j>0;j--){
   		arr[j]=arr[j-1];
	 }
	   arr[0]=temp;
   }
   for(int i=0;i<7;i++){
   	cout<<arr[i]<<" , ";
   }
}
