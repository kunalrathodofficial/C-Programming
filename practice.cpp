#include<iostream>
using namespace std;

float si(float p,int t,float r){
  return((p*t*r)/100);


}


int main(){
   float p,r,s;
   int t;
   cout<<"enter values of p,t,r:";
   cin>>p>>t>>r;
   s=si(p,t,r);
   cout<<" simple intrest is"<<s;


     return 0 ;
} 