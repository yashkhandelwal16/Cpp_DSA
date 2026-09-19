#include<bits/stdc++.h>
using namespace std;
void func(int n,int& sum){
    if(n==0){
        return ;
    }
    sum = sum+n;
    func(n-1,sum);
}
int main(){
    int n,sum=0;
    cout<<"Enter the no : ";
    cin>>n;
    func(n,sum);
    cout<<sum<<endl;
    return 0;
}