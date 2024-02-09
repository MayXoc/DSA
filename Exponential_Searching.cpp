//Application -> Used for searching in infinity array unbounded array
//Better than binary search if x is near begnning
#include <iostream>
#include <vector>
using namespace std;
//Binary search only applied on selected and less portion of array
int BinarySearch(vector <int> &arr,int l,int h,int x){
    while(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid] == x || l==h){
            return mid;
        }
        else if(arr[mid]>x){
            h=mid-1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
} 

void ExponentialSearch(vector <int> &arr,int x){
    int n = arr.size() -1;
    if(arr[0]==x){
        cout<<"Element found at 0 index";
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    int l=i/2;
    int h=min(i,n);
    cout<<"Element found at "<<BinarySearch(arr,l,h,x)<<" index";
}

int main(){
    vector <int> arr{2,4,5,6,8,9,10,15,16,17,25,37,44,65,68,89};
    int x = 89;
    ExponentialSearch(arr,x);
    
}