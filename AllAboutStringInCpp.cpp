#include <iostream>
#include <string.h>
using namespace std;
// All about strings in c++

//strings dynamic in nature its a sequence of charactor

//strings have utility functions like for deletion / append / updation etc

int main(){
    //creation
    string name;

    string name2;
    
    string xx = "Mayank";

    int asci = (int)xx[6];

    int index=0;
    //input
    getline(cin, name2); //Using getline for space include
    cin>>name;
    //accessing xx 6th element and printing its ASCI value
    
    cout<<"6th element of xx "<<xx[6]<<"\nASCI value - "<<asci<<"Hence null charactor vale is 0"<<endl;
    //output of no get line
    cout<<"output of non get line : "<<name<<endl; 

     //output for get line 
    cout<<"output for get line : "<<name2<<endl;

    //printing string name using while loop index with element by element 
    cout<<"printing string name2 using while loop index with element by element"<<endl;
    while(name2[index]!='\0'){
        cout<<"index - "<<index<<" Element - "<<name2[index]<<endl;
        index++;
    }
   
    
} 