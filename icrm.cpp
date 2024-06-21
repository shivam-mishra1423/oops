#include<iostream>
using namespace std;
class test{

 public:
    test():n(0){

    }
    void operator ++(){
    n++;

    }
    void show(){
    cout<<"the value of n: "<<n<<endl;
    }
 private:
    int n;
};
int main(){
test obj1;
++obj1;
obj1.show();

}
