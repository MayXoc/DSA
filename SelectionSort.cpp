 #include <iostream>
 #include <vector>
 using namespace std;
 void SelectionSort(vector <int> &arr){
     for(int i=0;i<arr.size();i++){
         int min =i;
        for(int j=i+1;j<arr.size();j++){
           if(arr[min]>arr[j]){
            cout<<j<<endl;
             min = j;
           }
        }
        swap(arr[min],arr[i]);
     }
 }
 int main(){
    vector <int> arr{3,5,6,4,2,1,9,8};
    SelectionSort(arr);
    for(auto var : arr){
      cout<<var;
    }
 } 