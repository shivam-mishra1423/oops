#include<iostream>
#include<string.h>
using namespace std;
class String{
private:
    char str[50];
public:
    String(){
     6strcpy(str," ");
    }
    String(char s[]){
    strcpy(str,s);
    }
    string operator+(String objs){
    String temp;
    if(strlen(temp.str) + strlen(objs.str)<50){
        strcpy(temp.str,str);
        strcat(temp.str,objs.str);
    }
    else{
        cout<<"string over flow";
          exit(1);
            }

    }
    void display(){
    cout<<str<<endl;
    }
};
int main(){
   String s1="hello";
   String s2 ="word";
   String s3;
   s3 = s1+s2;
   s1.display();
   s2.display();
   s3.display();

}
