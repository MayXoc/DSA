#include <iostream>
#include <vector>
using namespace std;
void JaggedArray(vector<vector<int> >brr){
	for(int i=0;i<brr.size();i++){
		for(int j=0;j<brr[i].size();j++){
			cout<<brr[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	vector <vector<int> > brr;
	vector <int> arr(5,0);
	vector <int> arr2(3,-1);
	vector <int> arr3(4,0);
	vector <int> arr4(8,-1);
	brr.push_back(arr);
	brr.push_back(arr2);
	brr.push_back(arr3);
	brr.push_back(arr4);
	JaggedArray(brr);

}

