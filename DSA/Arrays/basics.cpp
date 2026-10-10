#include<bits/stdc++.h>
using namespace std;
int main(){

    // declaration of array
    int arr[5]{}; // here if you not assiging value then you have to mention aleast its size otherwise got error and in empty array , garbage value get stored.
    int vrr[] = {2,3,2,332,23,23,4,4,56,56,5,5,3,3,4};   // here we can increase or decrease the elements as we not defined the size initally.
    // if we want to print the entire array at once then we have to use loop , bcoz we can't print entire array easily.
    cout<<arr[4]<<endl; //garbage value.
    cout<<vrr[1]<<endl; 
    return 0;
}