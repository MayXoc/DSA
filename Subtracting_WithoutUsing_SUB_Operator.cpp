#include <iostream>
using namespace std;
int SubtractingWithoutUsingSubOperator(int a,int b){
	b = ~b;
	b = b +1;
	return a+b;
}
int main(){
	int a , b;
	cout << "Enter digit a and b which need to substract - ";
	cin>>a>>b;
	cout<<"Here - "<<SubtractingWithoutUsingSubOperator(a,b);
}