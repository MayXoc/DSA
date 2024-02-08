
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int index(vector <int> &arr){
      auto it = min_element(arr.begin(), arr.end());
      int index = distance(arr.begin(), it);
      int n = *min_element(arr.begin(), arr.end());
      *min_element(arr.begin(), arr.end()) = INT_MAX;
      return index;
}

int main() {
    vector <int> arr{1,2,3,4,5};
    int size = arr.size()-1;
    int k = 4,x=35;
    int n=k;
    vector <int> arr1;
    vector <int> ans;
    for(int i=0;i<arr.size();i++){
        int ele = abs(arr[i]-x);
        arr1.push_back(ele);
    }
    while(k!=0){
        ans.push_back(arr[index(arr1)]);
        k--;
    }
    
   
    for(auto v : ans){
        cout<<v<<" ";
    }
}