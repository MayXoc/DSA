#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printvov( vector <vector <int>> &arr){
    
    for(int i=0;i<arr.size();i++){
        int a,b;
        vector <int> temp = arr[i];
        a=temp[0];  // same like unboxing
        b=temp[1];
        cout<<a<<" "<<b<<endl;
    }
}

int main(){
    vector <vector <int>> arr;
    cout<<"Enter size"<<endl;
    int n ; cin>>n; //getting size
    for(int i=0 ; i<n ; i++ ){
        int a , b;
        cout<<"enter a and b"<<endl;
        cin>>a>>b;
        vector <int> temp;
        temp.push_back(a);
        temp.push_back(b);
        
        arr.push_back(temp);//arr[0] mai ek aur vector a and b vala
    }
    cout<<"Before sorting vector of vector "<<endl;
    printvov(arr);  // printing vector of vector element;
    //sorting by 1st index
    sort(arr.begin(),arr.end());
    cout<<"After sorting vector of vector by 1st index element"<<endl;
    printvov(arr);

}