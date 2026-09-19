// Print 1 to N using Recursion 
#include<bits/stdc++.h>
using namespace std;
void func(int n,int& i){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    i++;
    func(n,i);
}
int main(){
    int n,i=1;
    cout<<"Enter the no : ";
    cin>>n;
    func(n,i);
    return 0;
}