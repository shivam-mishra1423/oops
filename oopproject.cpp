//create player class
#include<iostream>
#include<string.h>
using namespace std;
class player{
private:
    int age;
    char name[40], team[40];
public:
    player(){
    cout<<"enter player name : ";
    cin.getline(name,40);
    cout<<"enter player team :";
    cin.getline(team,40);
    cout<<"enter player age  :";
    cin>>age;
    }
void input(){
cout<<"enter player name : ";
cin>>name;
cout<<"enter player team : ";
cin>>team;
cout<<"enter player age : ";
cin>>age;
}
void display(){
cout<<"player name is :"<<name<<endl;
cout<<"team name is :"<<team<<endl;
cout<<"player age is :"<<age<<endl;
system("pause");
}
void change(char n[40], char t[40], int a){
   strcpy(name,n);
   strcpy(team,t);
   age =a;
}

};
int main()
{
    int choice;
    player p;
    do{
     system("cls");
    cout<<"-----main menu---------------"<<endl;
    cout<<"1:- input player data"<<endl;
    cout<<"2:- display player data "<<endl;
    cout<<"3:- change player data"<<endl;
    cout<<"4:- exit"<<endl;
    cout<<"enter any choice:";
    cin>>choice;
    switch(choice){
case 1:
    p.input();
    break;
case 2:
    p.display();
    break;
case 3:
    p.change("shivam","india",40);
    case4:{
    exit(1);
    break;
    }
default:
    cout<<"you enter invilidnumber"<<endl;
    }

  }while(1);

}

