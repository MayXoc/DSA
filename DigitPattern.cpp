#include<iostream>
using namespace std;
void pattern(int n){
    int i=1;
    while(i<n){
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}