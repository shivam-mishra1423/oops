#include<iostream>
using namespace std;
class Distance{
public:
    Distance() : km(0), hr(0){  //distructor distance
    }
    void get(){
    cout<<"enter distance in km:";
    cin>>km;
    cout<<"enter hours of distance:";
    cin>>hr;

    }
    void show(){
    cout<<"your traveled is "<<km<<" km in "<<hr<<" hours "<<endl;
    }
    void totalDis(Distance pas){
        Distance t;
        t.km= km + pas.km;
        t.hr=hr + pas.hr;
        cout<<"total travered is "<<t.km<<"kilometer and in " <<t.hr<<"hours"<<endl;
    }
 private:
     int km,hr;
};
int main(){
Distance youdis, mydis;
cout<<"----your input of distance--------"<<endl;
youdis.get();
youdis.show();
cout<<"-----total output of distance-----"<<endl;
youdis.totalDis(mydis);


}

