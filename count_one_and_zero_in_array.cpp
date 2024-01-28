#include <iostream>
using namespace std;
void count(int arr[],int n){
    int zero=0;
    int one=0;
 for(int i =0;i<n;i++){
    if(arr[i]==1){
        one++;
    }
    else{
        zero++;
    }
 }
 cout<<"Number of zeros = "<<zero<<endl<<"Number of ones = "<<one;   
}
int main(){
    int arr[10]={1,1,1,0,0,0,0,0,0,1};
    count(arr,10);
}
