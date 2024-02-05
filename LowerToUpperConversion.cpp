#include <iostream>
using namespace std;
void lowerToUpper(char ch[]){
    int index =0;
    while(ch[index]!='\0'){
       
        if(ch[index]>='a' && ch[index]<='z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before conversion  - "<<ch;
    lowerToUpper(ch);
    cout<<"\nAfter conversion - "<<ch;
};