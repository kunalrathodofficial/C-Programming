#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,n;
	cin>>t;
	n=2*t;
	int arr[n];
	while(t>0){
		cin>>a>>b;
		
	       int i=1;
	       arr[i]=a;
		  arr[i+1]=b;
		 i=i+2;
        t--;
	 }
	 
	 
	 int sum;
 for(int i=1;i<=t;i+2){
 sum=arr[i]+arr[i+1];
    if( sum%3==0){
    	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	  
}
      

	return 0;
}
