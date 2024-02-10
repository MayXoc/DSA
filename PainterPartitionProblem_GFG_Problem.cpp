#include <iostream>
#include <numeric>
using namespace std;
bool isPossibleSol(int arr[], int N, int M, long long sol) {
    long long TimeSum = 0;
    int c = 1; // how many painter allocated
    for (int i = 0; i < N; i++) {
        if (arr[i] > sol) {
            return false;
        } else if (TimeSum + arr[i] > sol) {
            c++;
            TimeSum = arr[i];
            if (c > M) { // check if number of painters exceeds M
                return false;
            }
        } else {
            TimeSum += arr[i];
        }
    }
    return true;
}



long long MinTime(int arr[],int n,int k){
    //determining searching space
    long long s = 0;
    int e = accumulate(arr,arr+n,0);
    long long ans = -1;
    while(s<=e){
        long long mid = (s+e) >> 1;
        if(isPossibleSol(arr,n,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {5,10,30,20,15};
    int N = 5; // number of boards
    int K = 3; // Number of painters
    //for finding minimum time using function MinTime
    cout<<MinTime(arr,N,K);
}