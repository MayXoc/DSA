#include <iostream>
#include <vector>
using namespace std;
bool FindIndex(vector <int> &arr,int target){
    int s=0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(target==arr[mid] || target==arr[mid-1] || target==arr[mid+1]){
            return true;
        } 
        else if(target>arr[mid]){
            s=mid+2;
        } 
        else  e=mid-2;
        mid = s+(e-s)/2;
    }
    cout<<"False";
    return false;
}
int main(){
    vector <int> arr{20,10,30,50,40,70,60} ;
    int target = 70;
    bool ans = FindIndex(arr,target); 
    if(ans==true){
        cout<<"Element found";
    }  
    else{
        cout<<"Element not found";
    }
}