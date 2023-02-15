#include<bits/stdc++.h>
using namespace std;
class person{
     public:
	 string name;
	 int age;
	 void set1(){
		cout<<"Enter the name of the person :";
		cin>>name;
		cout<<"Enter the age of the person :";
		cin>>age;

	 }
	 void get1(){
		cout<<"Enter the name of the person :"<<name<<endl;
		
		cout<<"Enter the age of the person :"<<age<<endl;
		
		
	 }
};
class employee{
      public:
	  string emp_id;
	  int emp_salary;
	  int holiday_allowance;
	  void set2(){
		cout<<"Enter the id  of the employee :";
		cin>>emp_id;
		cout<<"Enter the salary of the employee :";
		cin>>emp_salary;
		cout<<"Enter the holiday allowance of the employee :";
        cin>>holiday_allowance;

	 }
	 void get2(){
		cout<<"Enter the id  of the employee :"<<emp_id<<endl;
		cout<<"Enter the salary of the employee :"<<emp_salary<<endl;
		cout<<"Enter the holiday allowance of the employee :"<<holiday_allowance<<endl;
		
	 }
};
class manager:public person ,public employee{

};

int main(){
	manager obj;
	obj.set1();
	obj.set2();
	obj.get1();
	obj.get2();
	
	return 0;
}