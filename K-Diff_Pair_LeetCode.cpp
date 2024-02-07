#include <iostream>
#include <algorithm>
#include <vector>
#include <set> 
using namespace std;
             //Two pointer approach
// void FindKDiffPair(vector <int> &arr,int k){
//     // first we need to sort the array q ki two pointer approach ke leye must
//     sort(arr.begin(),arr.end());
//     set<pair<int, int>> ans;
//     int i=0,j=1;
//     cout<<"Pairs - "<<endl;
//     while(i<arr.size() && j<arr.size()){
//         int diff = arr[j]-arr[i] ;
//         if(diff==k){
//             cout<<arr[i]<<" , "<<arr[j]<<endl;
//             ans.insert({arr[i],arr[j]});
//             i++;j++;
//         }
//         else if(diff > k){
//             i++;    // diffrence ko kam krne ke leye i++
//         }
//         else{
//             j++;
//         }
//         if(i==j){
//             j++;
//         }
//     }
//     cout<<"K diff pairs - "<< ans.size(); //ans ek set hai to vo identical values nhi lega
// }

               //Binary search
int BinarySearch(vector<int> arr,int s,int k){
    int e = arr.size()-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
    
}

int FindKDiffPair(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    set<pair<int,int>> ans;
    for(int i = 0; i < arr.size(); i++){
        if(BinarySearch(arr, i+1, arr[i]+k) != -1){
            ans.insert({arr[i], arr[i]+k}); // Corrected insert function call yha par pair mai store hoga par without any duplicacy
        }
    }
    return ans.size();
}

           
           
int main(){
 vector <int> arr{1,2,7,4,3,1,3,5,6};
 int k = 3;  //jitne bhi pairs ka diff 3 aayega to count ++ ho jayega 
 cout<<"K diff Pair - "<<FindKDiffPair(arr,k);

}