#include<iostream>
using namespace std;
class student {
private:
     int rollno = 10;
     public:
     void display(){
     cout<<"The rollno is :" <<rollno;

     }

};
main(){
   student s;
   s.display();
}
