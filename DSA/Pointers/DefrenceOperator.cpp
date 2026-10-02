#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 34;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 50;
    cout<<x<<endl;
    return 0;
}