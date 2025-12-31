#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
int* ptr = &n;
cout<<"Adress of variable: ("<<ptr<<")"<<endl;
cout<<"Value using pointer: "<<*ptr<<endl;
return 0;
}