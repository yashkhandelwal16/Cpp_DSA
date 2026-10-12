// Print the maximum element present in an array ! 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, maximum;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    } 
    maximum = arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]>maximum){
            maximum = arr[i];  
        }
    }
    cout<<"Maximum element : "<<maximum;
    return 0;
}