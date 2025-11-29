#include<iostream>
using namespace std;
int main(){
int maths;
cout<<"Enter maths mark: "<<endl;
cin>>maths;
int english;
cout<<"Enter english mark: "<<endl;
cin>>english;
int physics;
cout<<"Enter physics mark: "<<endl;
cin>>physics;
int chemistry;
cout<<"Enter chemistry mark: "<<endl;
cin>>chemistry;
int french;
cout<<"Enter french mark: "<<endl;
cin>>french;
int total;
total = maths + english + french + chemistry + physics;
cout<<"Total = "<<total<<endl;
int percentage = (total * 100) / 500;
cout<<"Percentage = "<<percentage<<endl;

if( percentage >= 90 ){
cout<<"You secured grade A+"<<endl;
}
else if(percentage >= 80){
cout<<"You secured grade A"<<endl;
}
else if( percentage >= 70 ){
cout<<"You secured grade B"<<endl;
}
else if( percentage >= 60 ){
cout<<"You secured grade C"<<endl;
}
else if( percentage >= 50 ){
cout<<"You secured grade D"<<endl;
}
else if( percentage >= 40 ){
cout<<"You secured grade E"<<endl;
}
else {
cout<<"You failed"<<endl;
}
return 0;
}