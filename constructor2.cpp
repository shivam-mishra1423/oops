#include<iostream>
using namespace std;
class test{
test(){
private:
    int n,x,y;
public:
        test():n(10),x(20),y(30){
        cout<<"constructor is called..."<<endl;
      n=10;
}
void display(){
cout<<"n :" <<n <<endl;
cout<<"x :" <<x <<endl;
cout<<"y :" <<y <<endl;
}

};
main(){
 test t();
 t.display();
};
