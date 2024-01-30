#include <iostream>
#include <vector>
using namespace std;
int FindPivotElement(vector <int> &arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return arr[s];
        }
        else if(arr[mid]<arr[mid-1]){
            return arr[mid-1];
        }
        else if(arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[s]>arr[mid]){
            e = mid -1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
   vector <int> arr{4,5,6,7,0,1,2};
   int target = 0;
   cout<<"Here is target : "<<FindPivotElement(arr);
}