#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int Length(char ch[],int size){
    int index;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
int main(){
    char ch[100]; //declared charactor 100 bytes size array 
    // cin>>ch;//Taking input space ke baad vala element print nhi ho rha hai q ki vo null charactor pe ruk ja rha hai '\0'.
    cin.getline(ch,100); //not space / tab sab print ho rha hai to eka mtlb space NULL charactor nhi hai 
    cout<<ch<<endl;//printing element 
    // printing ch length
    int length  = Length(ch,100);
    cout<<"Length of string = "<<length<<endl;
    cout<<"Length of string = "<<strlen(ch); //Utility function
}