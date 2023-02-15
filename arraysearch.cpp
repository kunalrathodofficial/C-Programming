#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int count = 0;
    int k;
    cout<<"Enter the element which you want to find in the array "<<endl;
    cin>>k;
   for(int i=0; i<n;i++){
        if(arr[i]==k){
            cout<<"Given element is found in the array which is "<<k<<" at the index "<<i<<endl;
            count++;
        }

    }
    cout<<"The given elemet is found "<<count<<" times in the array.";
    return 0;
}