#include<iostream>
using namespace std;
class test{
public:
    void getvalue(){
    cout<<"enter number :";
    cin>>n;

    }
    void operator + (test obj){
    test t;
    t.n = n+obj.n;
    cout<<"the addition is "<<t.n<<endl;
    }
    void operator - (test obj){
    test t;
    t.n = n-obj.n;
    cout<<"the sub is "<<t.n<<endl;
    }
private:
    int n;
};
int main(){
test obj1,obj2;
cout<<"enter data of object 1"<<endl;
obj1.getvalue();
cout<<"enter data of object 2"<<endl;
obj2.getvalue();
obj1+obj2;
obj1-obj2;
}
