#include<iostream>
using namespace std;
int Factorial(int n){
   //base case
   if(n==1){
      return 1;
   }
   if(n==0){
      return 1;
   }
   //Processing
   //recursive relation
   int RecursiveValue = Factorial(n-1);
   //processing
   int Finalans = n * RecursiveValue;
   return Finalans;
}


int main(){
   int num;
   cout<<"Enter Digit - ";
   cin>>num;
   cout<<"Here Factorial of that digit - "<<Factorial(num);
}