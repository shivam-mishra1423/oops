#include<iostream>
using namespace std;
class test{
private:
    int n;
public:
    test():n(0){
    cout<<"constructor is called..."<<endl;
    }
void setvalue(int num)
{
    n=num;
}
int getvalue()
{
    return n;
}
};
