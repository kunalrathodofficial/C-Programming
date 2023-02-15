#include<iostream>
using namespace std;
class kunal{
    private:

   int kilometer,meter;
   public:
   kunal(){
    kilometer=0;
    meter=0;

   }
   kunal(int a,int d){
    kilometer=a;
    meter=d;

   }
   
   void print(){
    cout<<kilometer<<"."<<meter<<" "<<"KM"<<endl;
   }
   int operator +(kunal c){
        int temp;
        temp.kilometer=kilometer+c.kilometer;
        temp.meter=meter+c.meter;
        return temp;
   }
   
};
int main(){
    kunal c1(5,4);
    kunal c2(2,5);
    
    kunal k;
    k=c1+c2; //c3=c2.add(c2);
    k.print();

    //int x=5;
    //int y=4;
    //int z=x+y;
    //cout<<"z value"<<z<<endl;
    return 0;
}