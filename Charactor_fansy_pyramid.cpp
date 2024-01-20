#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	char ch1;
	int a=1;	
	    for(int j=0;j<2*i+1;j++){
	    	
	    	if(j<i+1){
	    		char ch='A'+j;
		        cout<<ch;
				ch1=ch; 
			}
			
			else{
				char ch2=ch1-a;
		        cout<<ch2;
		        a++;
			}
	    }
		cout<<endl;
	}
}
