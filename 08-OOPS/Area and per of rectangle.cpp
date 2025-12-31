#include<bits/stdc++.h>
using namespace std;
class Rectangle{
private:
int length;
int width;

public:

void input(){
cout<<"Enter length: "<<endl;
cin>>length;
if(length <= 0){
cout<<"Invalid input"<<endl;
return;
}
cout<<"Enter width: "<<endl;
cin>>width;
if(width <= 0){
cout<<"Invalid input"<<endl;
return;
}
}

void area(){
int ar = length * width;
cout<<"Area of the Rectangle: "<<ar<<endl<<endl;
}

void perimeter(){

int per =  2 * (length + width);
cout<<"perimeter of Rectangle: "<<per<<endl<<endl;
}
};


int main(){
Rectangle rec;
rec.input();
rec.area();
rec.perimeter();
return 0;
}