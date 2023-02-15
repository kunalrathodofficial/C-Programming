#include<iostream>
using namespace std;
int main(){
     int a[10];
     int n;
     for(int i=1;i<=10;i++){
        cin>>a[i];

     }
     cout<<"Enter a number :";
     cin>>n;
     for(int i=1; i<=10;i++){
     if(n==a[i]){
        cout<<n<<"is a element of array";
        cout<<"Index of the array :"<<i;

     }}

    return 0;
    }