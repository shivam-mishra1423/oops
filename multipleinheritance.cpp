#include<iostream>
using namespace std;
class student{
private:
    char name[40], city[40];
public:
    void input_data();
    void show_data();

};
class std_marks{
private:
    float math,comp,phy,total,avg;
public:
    void input_marks();
    void show_marks();

};

class result : public student,public std_marks{
public:
    void show_result(){
    cout<<"----------------"<<endl;
    cout<<"the complete result is : "<<endl;
    cout<<"----------------"<<endl;
    show_data();
    show_marks();

    }

};
void student::input_data(){
cout<<"the student name:";
cin>>name;
cout<<"enter student city:";
cin>>city;
}
void student::show_data(){
cout<<"the name is : "<<name<<endl;
cout<<"the city is  :"<<city<<endl;
}
void std_marks::input_marks(){
cout<<"enter computer marks:";
cin>>comp;
cout<<"enter math marks:";
cin>>math;
cout<<"enter physics marks:";
cin>>phy;
total = comp + math + phy;
avg = total/3.0;
}
void std_marks::show_marks(){
cout<<"the computer marks  :" <<comp<<endl;
cout<<"the maths marks  :" <<math<<endl;
cout<<"the phy marks  :" <<phy<<endl;
cout<<"total marks : "<<total<<endl;
cout<<"average : "<<avg<<endl;
}
int main(){
 result res;
 res.input_data();
 res.input_marks();
 res.show_result();
}
