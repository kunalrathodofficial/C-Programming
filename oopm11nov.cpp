#include<iostream>
using namespace std;
class kunal{
	public:
	char s1[5];
    char s2[5];
    char s3[3];
    kunal(){
	cout<<"Enter the elements of s1:";
    for(int i=0;i<5;i++){
    	cin>>s1[i];
	}
	cout<<"Enter the elements of s2:";
    for(int i=0;i<5;i++){
    	cin>>s2[i];
	 }
	 
    }
    void get(){
	
    for(int i=0;i<5;i++){
    	cout<<s1[i];
	}
	cout<<endl;
    for(int i=0;i<5;i++){
    	cout<<s2[i];
	}
	cout<<s1+s2;
	
}

kunal operator + (){
	for(int i=0;i<5;i++){
    	s3[i]=s1[i];
	 }
	 for(int i=0;i<5;i++){
    	s3[i+5]=s2[i];
	 }
	 cout<<endl;
	 for(int i=0;i<10;i++){
    	cout<<s3[i];
	}
	
}
	
};

int main(){
     kunal k;
     k.get();
    
     return 0;
} 
