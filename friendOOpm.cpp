#include<bits/stdc++.h>
using namespace std;
class coordinate{
   
     int x,y;
       public:
	 coordinate(int n1,int n2)
     {
      x=n1;
      y=n2;  

     }
     friend void swap(coordinate  &k);
    

	 
};
void swap(coordinate &k){
   cout<<"before swapping :"<<endl;
   cout<<"value of x is"<<k.x<<endl;
   cout<<"value of y is"<<k.y<<endl;
   int t=k.x;
   k.x=k.y;
   k.y=t;
   cout<<"after swapping :"<<endl;
   cout<<"value of x is"<<k.x<<endl;
   cout<<"value of y is"<<k.y<<endl;

}



int main(){
	coordinate k(4,2);
    
    swap(k);
    

	
	return 0;
}