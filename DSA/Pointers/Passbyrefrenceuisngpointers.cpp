#include<bits/stdc++.h>
using namespace std;

void ref(int* ptr){
    *ptr = 100;
}

int main(){
    int x ;
    cout<<"Enter the value : ";
    cin>>x;
    int* ptr = &x;
    ref(ptr);
    cout<<x<<endl;
    return 0;
}