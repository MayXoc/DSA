#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
bool isPossibleSol(int A[],int &N,int &M,int &sol){
    int pageSum = 0;
    int c = 1;  // Kitne student ko allocate ho rha hai vo btayege
    for(int i=0;i<N;i++){
        if(A[i]>sol){
            return false;
        }
        else if(pageSum + A[i] > sol){
            c++;
            pageSum = A[i];
            if(c>M){
                return false;
            }
        }
        else{
            pageSum +=A[i];
        }
    }

    return true;

}

int FindPages(int A[],int &N,int &M){
    int s=0;
    int e = accumulate(A,A+N,0);
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossibleSol(A,N,M,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1 ; 
        }
    }
    return ans;
}
int main(){
    int arr[] = {12,34,67,90};
    int N = 4;
    int M = 2;
    cout<<FindPages(arr,N,M);
}