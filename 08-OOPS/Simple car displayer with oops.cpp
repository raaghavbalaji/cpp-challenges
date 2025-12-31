#include<bits/stdc++.h>
using namespace std;
class Car{
private:
string name;
string model;
int year;
double price;

public:
void getdata(){
cout<<"Enter the brand of the car: "<<endl;
getline(cin, name);
cout<<"Enter the model of "<<name<<": "<<endl;
getline(cin, model);
cout<<"Enter the year of "<<name<<": "<<endl;
cin>>year;
cout<<"Enter the price of "<<name<<": "<<endl;
cin>>price;
}
void showdata(){
cout<<"Car details: "<<endl;
cout<<name<<" "<<model<<" "<<year<<" "<<price<<"$"<<endl;
}
};
int main(){
Car car;
car.getdata();
car.showdata();
return 0;
}
    