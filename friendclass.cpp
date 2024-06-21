#include<iostream>
using namespace std;
class a{
private:
    int a;
protected:
    int b;
public:
    friend class b;

};
class b{
public:
    void input(a obj1){
    cout<<"enter first number:";
    cin>>obj1.a;
    cout<<"enter second number : ";
    cin>>obj1.b;
    sum(obj1);
    }
    void sum( a obj1){
    int res;
    res = obj1.a + obj1.b;
    cout<<"the sum is:"<<res;
    }
};

int main(){
a obj1;
b obj2;
obj2.input(obj1);
}
