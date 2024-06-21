#include<iostream>>
using namespace std;
class counter{
private:
    static int count;
public:
    counter(){
    count++;
    showobject();
    }
    void showobject(){
        system("cls");
    cout<<"total object is :"<<count<<endl;
    }
};
int counter :: count =0;
int main(){

counter c1,c2,c3;
}
