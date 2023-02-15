#include<iostream>
#include<string.h>
using namespace std;

class kunal{
   //private:
  //int a,b;
  public:
  int a,b;
   void set(int x,int y){
    a=x;
    b=y;
   }
   void show(){
   cout<<a<<"+i"<<b;
   }
   kunal operator +(kunal c){
      kunal t;
      t.a=a+c.a;
      t.b=b+c.b;
      return t;

   }
};

int main(){
   
   kunal c1,c2,c3;
    c1.set(3,4);
    c2.set(5,6);
    c3=c1+c2;
    c1.show();cout<<endl;
    c2.show();cout<<endl;
   c3.show();
   return 0;
}
