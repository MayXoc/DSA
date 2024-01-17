#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> arr1{1,2,4,6,8,10};
	vector <int> arr2{3,4,5,6};
	vector <int> ans;
	for(int i=0;i<arr1.size();i++){
		for(int j=0;j<arr2.size();j++){
			if(arr1[i]==arr2[j]){
				arr2[j]=-1;
			}
		}
	}
   for(int i=0;i<arr1.size();i++){
       ans.push_back(arr1[i]);
    }
    for(int j=0;j<arr2.size();j++){
        if(arr2[j]==-1){
           continue; 
        }
		ans.push_back(arr2[j]);	
	}

   for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<" ";
	}
}
