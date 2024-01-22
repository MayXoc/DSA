#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(i==3 || (i==1 && j==2 ) ||(i==2 && j==1) || (j==3)){
				cout<<"9"<<" ";
			}	
			else{
				cout<<" "<<" ";
			}
		}
		cout<<endl;
	}
}
