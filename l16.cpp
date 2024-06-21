 #include<iostream>
 using namespace std;
 class student{
 public:
     get(){
     cout<<"enter roll no: ";
     cin>>rollno;
     cout<<"enter name : ";
     cin>>name;
     cin.getline(name,40);
     cout<<"enter marks : ";
     cin>>marks;
     }
     void show(){
     cout<<"the roll no :"<<rollno<<endl;
     cout<<"the name is : "<<name<<endl;
     cout<<"the marks is  :"<<marks<<endl;
     }
 private:
    int rollno, marks;
    char name[40];
     };
     int main(){
     student s1,s2;
     s1.get();
     cout<<"------student 1 output----"<<endl;
     s1.show();
     s2=s1;//yha s1 ki value s2 me copy ho jyge
        cout<<"------student 2 output----"<<endl;
     s2.show();

     }
