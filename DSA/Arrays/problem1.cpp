// Print the sum of elements present in the array !

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<"Total sum of the array's elements : "<<sum;
    return 0;
}