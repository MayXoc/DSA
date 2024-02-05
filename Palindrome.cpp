#include <iostream>
void UpperToLower(char ch[]){
    int index =0;
    while(ch[index]!='\0'){
       
        if(ch[index]>='A' && ch[index]<='Z'){
            ch[index] = 'a' + (ch[index]-'A');
        }
        index++;
    }
}
int findLength(char ch[],int n){
    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
void Palindrome(char ch[],int len){
    UpperToLower(ch);
    //using two pointer approach to compare and find the palindrome ;
    int s=0;
    int e=len-1;
    bool ans=true;;
    while(s<e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            ans=false;
            break;
        }
    }
    if(ans==true){
        std::cout<<"Given string is palindrome";
    }
    else{
        std::cout<<"Given string is not palindrome";
    }
}
int main(){
    char ch[100];
    std::cout<<"Enter your string - ";
    std::cin.getline(ch,100);
    int length = findLength(ch,100);
    //function for checking it is palindrome or not 
    Palindrome(ch,length);
}