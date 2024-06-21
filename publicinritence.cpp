#include<iostream>
using namespace std;
class parent{
private:

protected:
     int n1;
    int n2;
public:
    void show(){
    cout<<"the value of n1 :"<<n1<<endl;
    cout<<"the value of n2 :"<<n2<<endl;
    }
};
class child:public parent{
public:
    void input(){
    cout<<"enter first value :";
    cin>>n1;
    cout<<"enter second value : ";
    cin>>n2;
    }
};
int main(){
child obj1;
obj1.input();
obj1.show();
}
