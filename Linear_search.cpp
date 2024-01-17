#include <iostream>
using namespace std;
int main(){
	int arr[5];
	int num = 7;
	int numlocation ;
	for(int i = 0; i<5 ; i++){
		cin>>arr[i];
	}
	for(int i = 0; i<5;i++){
		if(arr[i] == num){
			numlocation = i;
			cout<<"Location of the number - "<<numlocation+1;
			break;
		}
	}
	
	
}