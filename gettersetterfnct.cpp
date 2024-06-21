#include<iostream>
#include<string.h>
using namespace std;
class book{
private:
    int page;
    float price;
    char name[40];

public:
    void setpage(int p){
    page =p;
    }
    void setprice(float pr){
    price = pr;
    }
    void setname(char *n){
    strcpy(name,n);
    }
    void display(){
    cout<<"the page is : "<<page<<endl;
    cout<<"the price is :"<<price<<endl;
    cout<<"the name is : "<<name<<endl;;
        }
};
main(){
book b1;
cout<<"------book1 data----"<<endl;
b1.setpage(100);
b1.setprice(300.98);
b1.setname("web programming");
b1.display();

}
