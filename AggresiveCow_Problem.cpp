#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector <int> &stall,int k,int n,int mid){
    // so we check here can we place k cows at least mid distance
    int c =1;
    int pos = stall[0];
    for(int i= 0;i<stall.size();i++){
        if(stall[i]-pos>=mid){
            c++;
            pos = stall[i];
        }
        if(c==k) return true;
    }
    return false;
}
int findingSolution(vector <int> &stall,int k,int n){
    //is step to sort the vector
    sort(stall.begin(),stall.end());
    int s = 0;
    int e = stall[stall.size()-1] - stall[0];
    int ans = -1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(ispossible(stall,k,n,mid)){
            ans = mid;
            s = mid  + 1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}




int main(){
    vector <int> stall{1,2,4,8,9};
    int k = 3;
    int n = 5;
    cout<<findingSolution(stall,k,n);

}