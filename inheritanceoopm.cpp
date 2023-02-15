#include<iostream>
using namespace std;

class vehicle{
	public:
	string category="ferrari";
	string reg_no="MP09MH0930";	
};
class Fourwheeler :public vehicle{
	public:
	int model_no;
	string color;
	string campany_name;
};
class Twowheeler:public vehicle{
	public:
	int model_no;
	string color;
	string campany_name;
};
int main(){
	Twowheeler kunal1;
	cout<<"From class Twowheeler :"<<kunal1.category<<endl;
	cout<<"From class Twowheeler :"<<kunal1.reg_no<<endl;
	Fourwheeler kunal2;
	cout<<"From class Fourwheeler :"<<kunal2.category<<endl;
	cout<<"From class Fourwheeler :"<<kunal2.reg_no<<endl;
	return 0;
	
}
