#include<bits/stdc++.h>
using namespace std;
class alpha{
     public:
	 alpha(){
        cout<<"Constructor is called from alpha class"<<endl;
     }

	 
};
class beta{
      public:
	  beta(){
        cout<<"Constructor is called from beta class"<<endl;
     }
};
class gamma:public alpha ,public beta{
     public:
	  gamma(){
        cout<<"Constructor is called from gamma class"<<endl;
     }
};


int main(){
	gamma kunal;

	
	return 0;
}