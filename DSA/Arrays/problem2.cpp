// Print the product of each and every elements present in an array ! 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    cout<<product<<endl;
    return 0;
}