#include<iostream>
using namespace std;
class counter{
private:
    static int count;
public:
   counter(){
   count++;
   }
   void showcount(){
       cout<<"ypu created " <<count<<"object of this class"<<endl;

   }
};
int counter::count = 0;
int main(){
counter obj1,obj2,obj3;
obj1.showcount();
}

