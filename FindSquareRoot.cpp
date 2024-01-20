#include <iostream>
#include <vector>
using namespace std;
int FindSquareRoot(int num){
    int start=0;
    int end = num;
    int ans=-1;
    int mid = start+(end-start)/2;
   while(start<=end){
    if(mid*mid==num){
        return mid;
    }
    else if(mid*mid>num){
        end=mid-1;
    }
    else {
        start=mid+1;
        ans=mid;
    }
    mid = start+(end-start)/2;
   }
    return ans;
}

int main(){
    int num;
    cout<<"Enter number - ";
    cin>>num;
    cout<<"Here is the square root - "<<FindSquareRoot(num);
    
}