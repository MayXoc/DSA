#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ispossible(vector <int> &cRank,int np,int mid){
    int currP = 0;   //  Initial cooked Pratha count
    for(int i =0;i<cRank.size();i++){
        int R = cRank[i] ,j=1;
        int TimeTaken = 0;
        while(true){
            if(TimeTaken+j*R<=mid){
                ++currP;
                TimeTaken += j*R;
                ++j;
            }
            else{
                break;
            }
        }
        if(currP>=np){
            return true;
        }
    } 
    return false;
}
int minTimeToCompleteOrder(vector <int>&cRanks,int np){
    int  s= 0;
    int highestRank = *max_element(cRanks.begin(),cRanks.end());
    int e = highestRank * (np * (np+1)/2);
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(ispossible(cRanks,np,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){

    int T ;cin>>T;
    while(T--){
        int np,nc;//np = number of pratha and nc = number of cooks
        cin>>np>>nc;
        vector <int> cookRanks;
        while(nc--){
            int R;cin>>R;   //R = Rank of cooks
            cookRanks.push_back(R);
        }
        cout<<minTimeToCompleteOrder(cookRanks,np)<<endl;
    }
}