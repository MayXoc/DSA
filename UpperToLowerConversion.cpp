#include <iostream>
using namespace std;
void UpperToLower(char ch[]){
    int index =0;
    while(ch[index]!='\0'){
       
        if(ch[index]>='A' && ch[index]<='Z'){
            ch[index] = 'a' + (ch[index]-'A');
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before conversion  - "<<ch;
    UpperToLower(ch);
    cout<<"\nAfter conversion - "<<ch;
};
