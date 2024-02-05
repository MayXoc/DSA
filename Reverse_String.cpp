#include <iostream>
#include <string.h>
using namespace std;
void Reverse(char ch[],int size){ //using Two pointer approach
    int s = 0;
    int end= size-1;
    while(s<=end){
        swap(ch[s],ch[end]);
        s++;
        end--;
    }
}
int Length(char ch[],int size){
    int index;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
int main(){
    char ch[100];
    cout<<"Enter your charactor string - ";
    cin.getline(ch,100);
    cout<<"Before Reverse - "<<ch<<endl;
    int len = Length(ch,100);
    Reverse(ch,len);
    cout<<"After Reverse - "<<ch;
}