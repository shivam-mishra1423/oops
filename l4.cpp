#include<iostream>
using namespace std;
class student{
private:
    int rollno;
    char name[30];
public:
    void inputdata(){
    cout<<"enter roll no:";
    cin>>rollno;
    cout<<"enter name:";
    cin>>name;
    }
    void outputdata(){
    cout<<"your roll no is :"<<rollno<<endl;
    cout<<"your name is  :"<<name<<endl;

    }
    };
main(){
student s;
cout<<"--------input data ------"<<endl;
s.inputdata();
cout<<"--------output data ------"<<endl;
s.outputdata();
}

