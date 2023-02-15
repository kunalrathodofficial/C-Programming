#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter the day(1-7) :";
    cin>>day;
    switch (day)
    {
    case 1:cout<<"monday";
        break;
    case 2:cout<<"tuesday";
        break;
        case 3:cout<<"wednesday";
        break;
        case 4:cout<<"thursday";
        break;
        case 5:cout<<"fryday";
        break;
        case 6:cout<<"saturday";
        break;
    default: cout<<"30 feb";
        break;
    }
     

     return 0;
} 