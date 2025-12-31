#include<bits/stdc++.h>
using namespace std;
class Bank{
private:
string name;
double balance  = 0;

public:
void getdetails(){
cout<<"Enter name: "<<endl;
getline(cin, name);
cout<<"Enter initial amount: "<<endl;
cin>>balance;
}
void Deposit(){
int amount;
cout<<"Enter amount to deposit: "<<endl;
cin>>amount;
if(amount <= 0){
cout<<"Invalid amount"<<endl;
}
else{
balance += amount;
cout<<"Balance : "<<balance<<endl<<endl;
}
}

void Withdraw(){
int amount;
cout<<"Enter amount to Withdraw: "<<endl;
cin>>amount;
if (amount > balance) {
cout<<"Insufficient balance"<<endl;
}
else if(amount <= 0){
cout<<"Invalid amount"<<endl;
}
else{
balance -= amount;
cout<<"Balance : "<<balance<<endl<<endl;
}
}
void disp(){
cout<<"Account holder: "<<name<<endl;
cout<<"Remaining balance: "<<balance<<endl;
}
};
int main(){
Bank bank;
bank.getdetails();
int op;
op = 0;
while(op != 4){
cout<<"Choose one option: "<<endl;
cout<<"1.Deposit"<<endl;
cout<<"2.Widthraw"<<endl;
cout<<"3.Check Balance"<<endl;
cout<<"4.Exit\n"<<endl;
cout<<"Enter the option: "<<endl;
cin>>op;
if(op == 1){
bank.Deposit();
}
else if(op == 2){
bank.Withdraw();
}
else if(op == 3){
bank.disp();
}
else if(op == 4){
cout<<"Exiting bank system program"<<endl;
}
else if(op != 1 && op != 2 && op != 3 && op != 4){
cout<<"Invalid option"<<endl;
break;
}
}
return 0;
}
    