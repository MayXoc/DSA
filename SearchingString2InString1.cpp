#include <iostream>
using namespace std;
int main(){
    //Finding string2 in string1
    string string1 = "xocaar will soon top in the world";
    string string2 = "xocaar";
    if(string2.find(string1)==string::npos){
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
}