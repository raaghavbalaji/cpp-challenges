#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a, b, c;
cout<<"Enter the coefficients of a, b, c: "<<endl;
cin>>a>>b>>c;
float d =( b * b ) - (4 * a) * c;
if(d > 0){
float root1 = ( - b + sqrt(d)) / ( 2 * a);
float root2 = ( - b - sqrt(d)) / ( 2 * a);

cout<<"roots are real and distinct"<<endl;
cout<<"Root1 = "<<root1<<" Root2 = "<<root2<<endl;
}
else if( d = 0){
float root3 = - b / (2 * a);
cout<<"Roots are real and equal"<<endl;
cout<<"Root = "<<root3<<endl;
}
else{
float real = ( - b) / (2 * a);
float img = sqrt(-d) / (2 * a);
cout<<"Roots are complex and imaginary"<<endl;
cout<<"Root1 = "<<real<<" + "<<img<<"i"<<endl;
cout<<"Root2 = "<<real<<" - "<<img<<"i"<<endl;
}
return 0;
}
