#include<bits/stdc++.h>
using namespace std;

void swapcase(int* x, int* y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
}

int main(){
    int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    int* a = &x;
    cout<<"Enter the value of y : ";
    cin>>y;
    int* b = &y;
    cout<<"x : "<<x<<" & "<<"y : "<<y<<endl;
    swapcase(a,b);
    cout<<"x : "<<x<<" & "<<"y : "<<y<<endl;
    return 0;
}