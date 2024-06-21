#include<iostream>
using namespace std;

class test{
 private:
     int n= 10;
 public:
    void show(){
    cout <<"the value of n : " << n <<endl;
    }

};
main (){
test t; //declearing object
t.show();


}
