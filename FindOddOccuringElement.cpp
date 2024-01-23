#include <iostream>
#include <vector>
using namespace std;
int FindOddOccuringElement(vector <int> &arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;// for findng middile index
    while(s<=e){
        if(s==e){
            return s;
        }
        else if(mid%2==0){
            if(arr[mid]==arr[mid+1]){ //means ans right mai hai to
              s= mid+2; // q ki mid and mid +2 already check ho chuke hai
            }
            else{
                e=mid;//ya to ans mid mai hai ya left mai;
            }
        }
        else{ // matlb mid odd hai to
            if(arr[mid]==arr[mid-1]){
                s=mid+1;// q ki mid vala check ho chuka hai eleye
            }
            else{
                e=mid;
            }
        }
        mid = s+(e-s)/2;
    }
}

int main(){
    vector <int> arr{2,5,5,6,6,7,7,3,3,4,4,5,5,6,6};
    cout<<"Here index of odd occuring element - "<<FindOddOccuringElement(arr)+1;
}