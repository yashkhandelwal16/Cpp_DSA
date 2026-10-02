#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int* ptr = &x;
    int** dptr = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*dptr<<endl;
    cout<<**dptr<<endl;
    **dptr = 100;
    cout<<x<<endl;
    cout<<dptr<<endl;
    return 0;
}