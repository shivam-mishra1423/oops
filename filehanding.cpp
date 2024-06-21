#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student{
  private :
    int rollno;
    string name;
public:
  void inputdata(){
    cout<<"enter rollno :";
    cin>>rollno;
    cout<<"enter name:";
    cin>>name;
    }
    int getrollno(){
    return rollno;
    }
    string getname(){
    return name;
    }
};
int main(){
 student s[3];
 ofstream outfile("student.txt");
 for(int i = 0; i<3; i++){
    s[i].inputdata();
    outfile<<"roll no : "<<s[i].getrollno()<<"name : "<<s[i].getname()<<endl;
 }
 outfile.close();

}
ifstream infile("student.txt");
string record;
while(getline(infile, record)){
    cout<<record<<endl;
};
  infile.close();
}
