#include <iostream>
void ReplaceChar(char ch[]){
    int index;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index ++;
    }
}
 int main(){
    char ch[100];
    std::cin.getline(ch,100);
    std::cout<<"Before - "<<ch<<std::endl;
    ReplaceChar(ch);
    std::cout<<"After - "<<ch;

 }