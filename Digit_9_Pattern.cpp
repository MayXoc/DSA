#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++){
			if(i==0 || i==2 || i==5 || (i==1 && j==0 )|| (i==1 && j==2 ) || (i==3 && j==2) ||(i==4 && j==2) || (i==5 && j==2 )){
				cout<<"9"<<" ";
			}	
			else{
				cout<<" "<<" ";
			}
		}
		cout<<endl;
	}
}

