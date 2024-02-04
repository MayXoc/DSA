#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Key_pair(vector <int> &arr,int k){
    //Using Two pointer approach
    int s=0;
    int l = arr.size()-1;
    int got = -1;
    while(s<l){
        int value = arr[s]+arr[l];
        if(value == k){
            cout <<"Pair index = "<<s+1<<" , "<<l+1;
            got = 1;
            break;
        }
        else if(value > k){
            l--;
        }
        else{
            s++;
        }
    }
    if(got==-1){
        cout <<"invalid intered key ";
    }

}
int main(){
    vector <int> arr{1,3,4,5,6,10,30};
    int key = 160;
    sort(arr.begin(),arr.end());
    Key_pair(arr,key);
}