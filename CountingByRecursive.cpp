#include<iostream>
using namespace std;
int Count(int n){
//    base case
   if(n==1){
      cout<<1;
      return 1;
   }
   //Processing
   //recursive relation
   cout<<n<<" ";
   Count(n-1);
}


int main(){
   int num;
   cout<<"Enter Digit - ";
   cin>>num;
   Count(num);
}