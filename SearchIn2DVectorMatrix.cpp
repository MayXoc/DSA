#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int s= 0;
        int e = row*col-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            int currentEle = matrix[mid/col][mid%col];
            if(currentEle==target){
                cout<<"true";
                return true;
            }
            else if(currentEle>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        cout<<"False";
        return false;
    }
int main(){
    vector< vector <int> >arr(3,vector<int>(3,0));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<"enter";
            cin>>arr[i][j];
        }
    }
    int target =15;
    searchMatrix(arr,target);
}