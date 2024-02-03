#include <iostream>
#include <algorithm>
#include <vector>
 using namespace std;

bool mycomp(int &a,int &b){
    return a < b; // for increasing order
    // return a > b; // for decreasing order
}

  int main(){
    vector <int> arr{3,2,4,6,7,8,1,5};
    sort(arr.begin(),arr.end(),mycomp);  //Comparator operator is use -> kis type se sort krna hai increasing ya phir decreasing order
    //comparator ka return type bool hota hai
    for(auto v : arr){
        cout<<v<<" ";
    }

  }
