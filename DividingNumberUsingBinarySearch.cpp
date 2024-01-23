#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num = 64;
    int num2 = -2;
    int Quotient =abs(num2);
    int s = 0;
    int e = num;
    int mid = s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int divisor =mid;
        if(divisor*Quotient==num){
            ans = divisor;
            break;
        }
        else if(divisor*Quotient>=num){
            e=mid-1;
        }
        else{
            ans = divisor;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if((num2<0 && num>0) || (num2>0 && num<0)){
        ans = 0-ans;
    }
    cout<<ans;
}