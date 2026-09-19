// Print N to 1 using Recursion 
#include<bits/stdc++.h>
using namespace std;
void func(int& i){
    if(i==0){
        return ;
    }
    cout<<i<<endl;
    i--;
    func(i);
}
int main(){
    int n,i;
    cout<<"Enter the no : ";
    cin>>n;
    i=n;
    func(i);
    return 0;
}