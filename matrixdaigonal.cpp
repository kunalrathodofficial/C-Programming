#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3];
    int sum[3][3];int sum1[3][3];
   
        
           sum[1][1]=a[1][1] +b[1][1];
           sum[2][2]=a[2][2] +b[2][2];
           sum[3][3]=a[3][3] +b[3][3];
          cout<<"the sum of forward diagonal :"<< sum[1][1] +sum[2][2] +sum[3][3];
     
     
    return 0;
}