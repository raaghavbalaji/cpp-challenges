#include<iostream>
using namespace std;
void swapping(int* a, int* b){
cout<<"Before swapping : "<<*a<<", "<<*b<<endl;
int temp = *a;
*a = *b;
*b = temp;


cout<<"After swapping : "<<*a<<", "<<*b<<endl;
}
int main(){
int a;
cout<<"Enter first number: "<<endl;
cin>>a;

int b;
cout<<"Enter second number: "<<endl;
cin>>b;

int* Aptr = &a;
int* Bptr = &b;

swapping(Aptr, Bptr);

return 0;
}