#include <iostream>
using namespace std;

int main() {
    
   int t,x,i=0;
   cin>>t;
   int arr[t];
   while(t--){
       cin>>x;
       arr[i]=x;
       i++;
   }
   for(int i=0;i<=t;i++){
       if(arr[i]<=67 && arr[i]>=45000){
           cout<<"YES";
       }
       else{
           cout<<"NO";
       }
   }
	return 0;
}
