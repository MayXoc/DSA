
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
void TwoPointerApproach(vector<int>&arr,int k,int x){
        int l=0,h=arr.size()-1;
        vector<int>ans;
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        for(int i=l;i<=h;i++){
            ans.push_back(arr[i]);
        }
        
         for(auto v : ans){
           cout<<v<<" ";
        }
}

// int index(vector <int> &arr){
//       auto it = min_element(arr.begin(), arr.end());
//       int index = distance(arr.begin(), it);
//       int n = *min_element(arr.begin(), arr.end());
//       *min_element(arr.begin(), arr.end()) = INT_MAX;
//       return index;
// }

int main() {
    vector <int> arr{1,2,3,4,5};
    int size = arr.size()-1;
    int k = 4,x=3;
    // int n=k;
    // vector <int> arr1;
    // vector <int> ans;
    // for(int i=0;i<arr.size();i++){
    //     int ele = abs(arr[i]-x);
    //     arr1.push_back(ele);
    // }
    // while(k!=0){
    //     ans.push_back(arr[index(arr1)]);
    //     k--;
    // }
    
   
    // for(auto v : ans){
    //     cout<<v<<" ";
    // }
    TwoPointerApproach(arr,k,x);

}