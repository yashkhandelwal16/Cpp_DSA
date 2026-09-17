#include<iostream>
using namespace std;
int main(){
    int n,val;
    cout<<"Enter the no : ";
    cin>>n;
    val = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val++<<" ";
        }
        cout<<endl;
    }
    return 0;
}


