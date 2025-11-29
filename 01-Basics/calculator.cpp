#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<"Welcome to the calculator :)"<<endl;
string name;
cout<<"Enter your full name:"<<endl;
getline(cin, name);
cout<<"Hello,"<<name<<endl;
double n1;
cout<<"Enter the first number:"<<endl;
cin>>n1;
double n2;
cout<<"Enter the second number:"<<endl;
cin>>n2;
char op;
cout<<"choose an operation(A for addition, S for subraction, M for multiplication, D for division:)"<<endl;
cin>>op;
switch(op) {
case 'A': {
double sum = n1 + n2;
cout<<"The sum is: "<<fixed<<setprecision(2)<<sum<<endl;
break;
}
case 'S': {
double sub = n1 - n2;
cout<<"The difference is: "<<fixed<<setprecision(2)<<sub<<endl;
break;
}
case 'M': {
double mul = n1 * n2;
cout<<"The product is: "<<fixed<<setprecision(2)<<mul<<endl;
break;
}
case 'D':{ 
       if(n2 == 0){
       cout<<"Divsion by zero is not possible"<<endl;
       }
       else{
double div = n1 / n2;
cout<<"The divison is: "<<fixed<<setprecision(2)<<div<<endl;
}
break;
}
default:
cout<<"Invalid input"<<endl;
}
return 0;
}