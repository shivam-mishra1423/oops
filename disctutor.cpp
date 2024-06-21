#include<iostream>
using namespace std;
class test{
public:

    test(){
    cout<<"constructor is called ...."<<endl;
    }
    ~test(){
    cout<<"destructor is called...."<<endl;
    }

};
    void objcreate(){
      test t1,t2;
}

   int main(){
    objcreate();
    cout<<"back in main...."<<endl;
    }
