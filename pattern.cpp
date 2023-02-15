#include<iostream>
using namespace std;

int main(){
     
     int n ;
     cin>>n;
     for(int i=1;i<= n;i++){
         for(int j=1;j<=i;j++){
             switch (j)
    {
        case '1':
        cout<<"A"<<endl;break;
         case '2':
        cout<<"A "<<"B"<<endl;break;
         case '3':
        cout<<"A "<<"B "<<"C "<<endl;break;
        
         case '4':
        cout<<"A "<<"B "<<"C "<< "D "<<endl;break;
        case '5':
        cout<<"A "<<"B "<<"C "<<"D "<<"E"<<endl;break;
        default:
        cout<<"*"<< endl;

         }
  cout<<endl;
     }
     }
     return 0;
} 