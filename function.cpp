#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class cal;
class student
{   private:
    string name;
    int maths_marks;
    int physics_marks;
    int chemistry_marks;

public:
    void set()
    {
        cout << "Enter the name of the student :";
        cin >> name;
        cout << "Enter maths marks :";
        cin >> maths_marks;
        cout << "Enter physics marks :";
        cin >> physics_marks;
        cout << "Enter chemistry marks :";
        cin >> chemistry_marks;
    }
    void print(){
        
        
    }
    
    friend class cal;
};
class cal
{   public:
    int display(student k)
    {
            cout<<"The student name is "<<k.name<<endl;
            int avg;
            avg = (k.maths_marks + k.physics_marks + k.chemistry_marks) / 3;
            return (avg);
        
    }
};

int main()
{
    student kunal;
    kunal.set();
    cout<<endl;
    kunal.print();
    cal k;
    cout<<"The average marks is "<<k.display(kunal)<<endl;


    return 0;
}
