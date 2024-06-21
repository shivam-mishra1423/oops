#include<iostream>
using namespace std;
class bank{
private:
    char name[40],actype[40];
    int bal,acno;
public:
    bank(){
    cout<<"enter acount name:";
    cin.getline(name,40);
    cout<<"enter acount type :";
    cin.getline(actype,40);
    cout<<"enter acount no:";
    cin>>acno;
    cout<<"enter opening balance:";
    cin>>bal;


    }
void diposite(int amt){
bal=bal+amt;
cout<<"balance after deposit: "<<bal<<endl;
}
void withdral(int amt){
if(amt > bal)
{
    cout<<"sory your balance is less than amount..."<<endl;
}
else{
    bal=bal -amt;
    cout<<"balance after withdrawl :"<<bal<<endl;
}
}
void display(){
cout<<"----acount detail-----"<<endl;
cout<<"account name :"<<name<<endl;
cout<<"account type:"<<actype<<endl;
cout<<"account no :"<<acno<<endl;
cout<<"current balance :"<<bal<<endl;
}

};
int main(){
bank objbank;
int amount, choice;
do{
    cout<<"----main menu----"<<endl;
    cout<<"1:- deposit money"<<endl;
     cout<<"2:- withdraw money"<<endl;
      cout<<"3:- display account detail"<<endl;
       cout<<"4:- Quit"<<endl;
       cout<<"enter any choice:";
       cin>>choice;
       switch(choice){
   case 1:
       cout<<"enter amount to deposte";
       cin>>amount;
    objbank.diposite(amount);
   case 2:
    cout<<"enter amount to withdraw";
       cin>>amount;
        objbank.withdral(amount);
        break;
   case 3:
    objbank.display();
    break;
   case 4:
    exit(0);
    break;
       }
}while(1);
}
