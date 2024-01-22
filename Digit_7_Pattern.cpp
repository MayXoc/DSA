#include <iostream>
using namespace std;
int main (){
	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			if(i==0 || (i==1 && j==3) || (i==2 && j==2) || (i==3 && j==1) || (i==4 && j==0)){
				cout<<"7"<<" ";
			}
			else{
				cout<<" "<<" "; 
			}
		}
		cout<<endl;
	}
}
