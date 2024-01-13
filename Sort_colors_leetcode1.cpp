#include <iostream>
#include <vector>
using namespace std;

int main(){
   int arr[6]={2,0,2,1,1,0};
   int start = 0;
   int end = 5;
   for(int index=0;index<end;index++){
     if(arr[index]==0){
   		swap(arr[index],arr[start]);
   		cout<<"\n swap"<<arr[index]<<" ,"<<arr[start]<<endl;
   		start++; 		
	 }
    else if(arr[index]==2){
		swap(arr[index],arr[end]);
		cout<<"\n swap"<<arr[index]<<" ,"<<arr[end]<<endl;
		//Catch mai yhi par fasunga q ki index++ nhi krna hai!!
		end--;
		index--;
	 }
   }
   for(int i=0;i<6;i++){
   	 cout<<arr[i]<<" , ";
   }
}

