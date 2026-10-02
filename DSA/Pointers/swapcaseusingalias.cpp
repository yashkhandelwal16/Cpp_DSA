#include<bits/stdc++.h>
using namespace std;

void swapcase(int& x, int& y){
    x = x+y;
    y = x-y;
    x = x-y;
}

int main(){
    int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<"x : "<<x<<" & "<<"y : "<<y<<endl;
    swapcase(x,y);
    cout<<"x : "<<x<<" & "<<"y : "<<y<<endl;
    return 0;
}