#include<iostream>
using namespace std;
int main(){
char n;
cout<<"How do u want to find if the triangle is valid ( s for side  or a for angle) : "<<endl;
cin>>n;
if(n == 's' || n == 'S'){
int a, b, c;
cout<<"Enter the three sides of triangle: "<<endl;
cin>>a>>b>>c;
if(( (a + b) > c) && ((b + c ) > a) && ((c + a) > b )){
cout<<"The triangle is valid"<<endl;
}
else{
cout<<"The triangle is not valid"<<endl;
}
}
else if(n == 'a' || n == 'A' ){
int ang1, ang2, ang3;
cout<<"Enter the three angles of triangle"<<endl;
cin>>ang1>>ang2>>ang3;

if((ang1 + ang2 + ang3 == 180 ) && (ang1 > 0) && (ang2 > 0) && (ang3 > 0) ){
cout<<"The triangle is valid"<<endl;
}
else{
cout<<"The triangle is not valid"<<endl;
}
}
return 0;
}