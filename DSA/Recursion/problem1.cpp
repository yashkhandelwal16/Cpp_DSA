// Print name N times using recursion 
#include<bits/stdc++.h>
using namespace std;
void func(string name){
    cout<<name<<endl;
    func(name);
}

int main(){
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    func(name);
    return 0;
}