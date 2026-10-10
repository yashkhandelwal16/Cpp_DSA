#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];  // this place is very important to declare the array instead of starting with n, n does not have any value .
    // Input 
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    // Output 
    for(int i=0;i<=n-1;i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}