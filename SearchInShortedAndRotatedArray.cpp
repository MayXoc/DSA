#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector <int> &arr,int target,int start,int end){
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if (arr[mid]>target){
            end=mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
void FindPivot(vector <int> &arr,int target){
    int s = 0; 
    int e =arr.size()-1;
    int mid = s+(e-s)/2;
    int desirdIndex=0;
    if(arr[mid]==target){
        desirdIndex = mid;
    }
    else if(target<arr[s]){
        s=mid+1;
        desirdIndex=BinarySearch(arr,target,s,e);
    }
    else if(target>arr[s]){
        e=mid-1;
        desirdIndex=BinarySearch(arr,target,s,e);
    }
    if(desirdIndex==-1){
        cout<<desirdIndex;
    }else {
        cout <<"Pivot element index - "<<desirdIndex+1;
    }
    
}
int main(){
    vector <int> arr{1};
    int target =0;
    FindPivot(arr,target);
}
