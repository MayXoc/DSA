#include <iostream>
#include <vector>
using namespace std;
int PivotIndex(vector <int> &arr){ //Pivot Index -> From where the Left area sum == Right area sum
    vector <int> Lsum(arr.size(),0);
    vector <int> Rsum(arr.size(),0);
    for(int i =1;i<arr.size()-1;i++){ //bar bar sum krne se bdiya to vector array mai dal kr pichle element sum kr lo time compexity bach jayegi
        Lsum[i] = Lsum[i-1]  + arr[i-1];
    }
     for(int i =arr.size()-2;i>0;i--){
        Rsum[i] = Rsum[i+1]  + arr[i+1];
    }
    for(int i =1;i<arr.size()-1;i++){//Fir jha par element same mtlb ki vha se Left aur Right sum same hai
        if (Lsum[i]==Rsum[i]){
            cout<<"Lsum - "<<Lsum[i]<<" Rsum - "<<Rsum[i]<<endl;
            return i+1;
        }
    }
    return -1;

}
int main(){
    vector <int> arr{1,5,7,8,9,4};
    cout<<"Here's the Pivot index - "<<PivotIndex(arr);
}