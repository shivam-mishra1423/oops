#include<iostream>
using namespace std;
class test{
private:
    int num;
public:
    test():num(0){
        cout<<"constructor is called..."<<endl;
    }
    friend void show(test obj1);//function keyword is used
};
void show(test obj1){
    obj1.num=10;
//cout<<"i am simple function "<<endl;
cout<<"the vale of num:"<<obj1.num<<endl;
}
int main(){
test obj1;
show(obj1);
};
