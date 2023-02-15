#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enetr the number :";

    cin>>n;
    int sum=0;
for(int i=1,j=n;i<=n && j>=1;i++,j-- ){
    sum=sum+i;
    cout<<j<<endl;
}
    
    cout<<"sum is :"<<sum<<endl;
     

     return 0;
} 