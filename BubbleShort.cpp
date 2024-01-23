#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector <int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-i-1;j++){//q ki unecessary compare krnajruri nhi
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    vector <int> arr{5,3,7,4,9,1,2};
    BubbleSort(arr);
    for(auto i : arr){// ye mast cheej hai yarr
        cout<<i<<" ";
    }
}