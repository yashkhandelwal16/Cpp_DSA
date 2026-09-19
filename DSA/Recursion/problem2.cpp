// Print 1 to N using Recursion 
#include<bits/stdc++.h>
using namespace std;
int i=1;
void func(int n){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    i++;
    func(n);
}
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    func(n);
    return 0;
}