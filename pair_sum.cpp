#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector <int> arr1{1,3,5,7};
   vector <int> arr2{2,4,6};
   int sum = 9;
   for(int i=0;i<arr1.size();i++){
   	for(int j=0;j<arr2.size();j++){
   		if(arr1[i]+arr2[j]==sum){
   			cout<<"\n Here is your pair " <<arr1[i]<<" , "<<arr2[j];
   			break;
		   }
	   }
   }
}
