#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*func(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<func(n);
    return 0;
}