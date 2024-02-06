#include <iostream>
using namespace std;
int main(){
    string name;
    string name2;
    string middle = "Xocaar";
    cout<<"Enter name and name2 - ";
    getline(cin,name);
    cout<<"\nEnter name and name2 - ";
    getline(cin,name2);
    //length function
    cout<<"Name length - "<<name.length()<<endl;
    cout<<"Name2 length - "<<name2.length()<<endl;

    //empty function
    cout<<"Checking name2 string is empty or not 1 means yes 0 means not empty - "<<name2.empty()<<endl; 

    //at function
    cout<<"Element Charactor at 0 - "<<name.at(0)<<endl;

    //front and back function
    cout<<"Charactor at front - "<<name2.front()<<endl;
     cout<<"Charactor at back - "<<name2.back()<<endl;

    //Append function 
    cout<<"Concatinating name to name2 - "<<name.append(name2)<<endl;
    
    //Erase function
    cout<<"erasing 2nd index to 4th index element - "<<name.erase(2,4)<<endl;

    //insert function
    cout<<"inserting in name2 (middle variable) in index 6 - "<<name2.insert(3,middle)<<endl;

    //push back and pop back
    name2.push_back('R');
    cout<<"Using push_back in name2 - "<<name2<<endl;
    name2.pop_back();
    cout<<"Using pop_back in name2 - "<<name2<<endl;



}