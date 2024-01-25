#include<iostream>
using namespace std;
int Count(int n){
//    base case
   if(n==1){
      cout<<1<<" ";
      return 1;
   }
   //recursive relation

   // Head recursion 

   Count(n-1); 

    //Processing 

   cout<<n<<" ";
  
}


int main(){
   int num;
   cout<<"Enter Digit - ";
   cin>>num;
   Count(num);
}