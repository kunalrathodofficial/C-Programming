#include<iostream>
using namespace std;
class student{
	string name;
	int age;
	bool gender;
	public:
	void setdata(string s,int a,int g){
		name=s;
		age=a;
		gender=g;
	}
	void getdata(){
	cout<<name<<endl;
	}
};
int main(){
	
	student a;
	int a;
	int g;
	string s;
	cin>>s>>a>>g;
	a.setdata(s, a, g);
	a.getdata();
	return 0;
}
