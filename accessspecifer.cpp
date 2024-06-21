#include<iostream>
using namespace std;

class test{
private:
    int n = 10;
    public:
    void inputdata(){
    cout <<"enter number :";
    cin>>n;
    }
    void outputdata(){
    cout<<"the value of n : "<<n<<endl;
    }
};
int main(){
    test t;
t.inputdata();
t.outputdata();
}
