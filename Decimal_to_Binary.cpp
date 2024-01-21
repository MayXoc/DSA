#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int num = 14;   //input number
	int rem = 0;  //Reminder 
	int Bin = 0;  //Binary number store
	int i = 0; 
	while(num!=0){
		rem =num%2;
		Bin = rem *pow(10,i) +Bin;
		num/=2;
		i++;
	}
	cout<<Bin;
}
