#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter number A: "<<endl;
cin>>a;
int b;
cout<<"Enter number B: "<<endl;
cin>>b;
int c;
cout<<"Enter number C: "<<endl;
cin>>c;
if ( a == b && b == c ){
cout<<"All the values are same "<<endl;
}
else{
int large;
large = a ;
if( b > large){
large = b;
}
if ( c > large){
large = c;
}
cout<<large<<" is the greatest number "<<endl;
int small;
small = a ;
if( b < small){
small = b;
}
if ( c < small){
small = c;
}
cout<<small<<" is the smallest number "<<endl;
}
if ((a == b || b == c || c == a ) && (a != b && b != c )){
cout<<"Two numbers are equal"<<endl;
}
else if( a != b && b != c && c != a){
cout<<"all numbers are different"<<endl;
}
if( a > b){
swap( a, b);
}
if(a > c){
swap(a, c);
}
if(b > c){
swap(b, c);
}
cout<<"Ascending order: "<<a<<", "<<b<<", "<<c<<endl;
return 0;
}