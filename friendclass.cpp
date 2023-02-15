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
    
    
friend class cal;
    int display()
    {
            cout<<"The student name is "<<name<<endl;
            avg_mark(maths_marks,physics_marks,chemistry_marks,student k);
        
    }
    
    
};
class cal
{   public:
    int avg_mark(student &kunal)
    {
            
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
    
    
    cal k;
    cout<<"The average marks is "<<k.display(kunal)<<endl;


    return 0;
}
