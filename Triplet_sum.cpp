#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector <int> arr1{10,20,30,40,50};
   int sum = 80;
   for(int i=0;i<arr1.size();i++){
   	 for(int j=i+1;j<arr1.size();j++){
   	   for(int k =j+1;arr1.size();k++){
   	     if(arr1[k]==NULL){
   	         break;
   	     }
   		 if(arr1[i]+arr1[j]+arr1[k]==sum){
         cout<<"\nhere is your triplet "<<arr1[i]<<","<<arr1[j]<<","<<arr1[k];
   		 }   
   	   }
	 }
   }
}
