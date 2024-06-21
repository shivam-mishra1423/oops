#include<iostream>
using namespace std;
class test{
  public:
    test(){
    cout<<"constructor is called...."<<endl;
    }
    test( int n){//compiler error occur
        num = n;
        cout<<"the value of number is  :"<<num<<endl;

    }
    test(float a, int n){
    avg = a;
    num =n;
    cout<"Avg : "<<avg<<endl;
    cout<"Number  :"<<num<<endl;

    }
private:
    int num;
    float avg;

    };
int main(){
test T1,T2(7), T3(7.9,8);

}
