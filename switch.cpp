//a switches robot
#include<iostream>
using namespace std;

int main(){
    
    char button;
    cout<<"input a character:";
    cin>>button;
    switch (button)
    {
        case 'a':
        cout<<"hello"<<endl;break;
         case 'b':
        cout<<"Namaste"<<endl;break;
         case 'c':
        cout<<"Salut"<<endl;break;
        
         case 'd':
        cout<<"Hola"<<endl; break;
        case 'e':
        cout<<"Cias"<<endl;break;
        default:
        cout<<"I am still learning"<< endl;



    }


     return 0;
} 