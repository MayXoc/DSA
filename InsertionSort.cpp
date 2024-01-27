#include <iostream>
#include <vector>
using namespace std;
void InsertionSort(vector <int> &arr){
    for(int i=1;i<arr.size();i++){
        int j=i-1;
        int key =arr[i];
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector <int> arr{4,5,6,3,1,2,7,8};
    InsertionSort(arr);
    for(auto var : arr){
        cout<<var<<" ";
    }
}