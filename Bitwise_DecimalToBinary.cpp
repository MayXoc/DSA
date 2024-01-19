#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int num = 14;   //input number
	int Bit = 0;  //Required bit store 
	int Bin = 0;  //Binary number store
	int i = 0; 
	while(num > 0){
		Bit = (num & 1);
		Bin = Bit *pow(10,i) +Bin;
		num = (num >>1);
		i++;
	}
	cout<<Bin;
}
