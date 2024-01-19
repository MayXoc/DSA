#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int Bin = 111;   //Binary input
	int sum = 0;
	int Dig = 0; 
	int Deci = 0;  //Decimal number store
	int i = 0; 
	while(Bin>0){
		Dig = (Bin & 1);
		sum = Dig *pow(2,i);
		Deci = Deci + sum;
		i++;
		Bin = (Bin >> 1);
	}
	cout<<Deci;
}
