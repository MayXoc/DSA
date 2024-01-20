#include<iostream>
using namespace std;
void Check(int c){
    if( c >='a' && c<= 'z'){
        cout<<0;
    }
	else if(c>='A' && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
int main() {
	char c;
    cout<<"Enter Alphabet - ";
    cin>>c;
    Check(c);
}
