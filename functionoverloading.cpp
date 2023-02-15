#include<iostream>
using namespace std;
class funcOverloading{
    public:
   void print(int x){
        cout<<"The value of integer x is : "<<x;
    }
    void print(char x){
        cout<<"The value of character x is : "<<x;
    }
     void print(double x){
        cout<<"The value of double x is : "<<x;
    }

};
int main(){
    funcOverloading kunal;
    kunal.print(4);cout<<endl;
    kunal.print('A');cout<<endl;
    kunal.print(99.98876544332);
    
    return 0;
}