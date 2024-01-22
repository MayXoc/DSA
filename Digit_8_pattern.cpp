#include <iostream>
using namespace std;
int main (){
	for(int i = 0;i<7;i++){
		for(int j = 0;j<4;j++){
			if(i==0 || i==6 || ((i==1 || i==2 || i==4 || i==5) && j==0) || ((i==1 || i==2 || i==4 || i==5) && j==3) || ((j==1 || j==2) && i==3)){
			
				cout<<"8"<<" ";
			}
			else{
				cout<<" "<<" ";
			}
		}
		cout<<endl;
	}
}
