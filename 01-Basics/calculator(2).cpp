#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the first number: "<<endl;
cin>>a;

char c;
cout<<"enter the operation ( + or - or / or ×): "<<endl;
cin>>c;

int b;
cout<<"enter second number: "<<endl;
cin>>b;

if( c == '+'){
int d = a + b;
cout<<"The sum is : "<<d<<endl;
}

else if( c == '-'){
int d = a - b;
cout<<"The sub is: "<<d<<endl;
}


else if( c == '*'){
int d = a * b;
cout<<"The product is: "<<d<<endl;
}

else if( c == '/'){
int d = a / b;
cout<<"The quotient is: "<<d<<endl;
}
return 0;
}