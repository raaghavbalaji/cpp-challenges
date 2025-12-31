#include<bits/stdc++.h>
using namespace std;
class Bank{
private:
map<string, int>info;
int balance = 0;
vector<string>transaction;


public:

bool val;

void createacc(){
cout<<"*********WELCOME*********\n"<<endl;
cout<<"Account Creation: \n"<<endl;
for(int i = 0; i < 1; i++){
string name;
cout<<"Enter account holdername: "<<endl;
getline(cin, name);
int pin;
cout<<"Create a 4 digit pin: "<<endl;
cin>>pin;
cin.ignore();
info[name] = pin;
}
}

void security(){
map<string, int>sec;
cout<<"LOGIN PAGE: \n"<<endl;
string name;
cout<<"Enter accountholder name: "<<endl;
getline(cin, name);
int pin;
cout<<"Enter your 4 digit pin: "<<endl;
cin>>pin;
sec[name] = pin;

if(sec == info){
cout<<"Valid user\n"<<endl;
val = true;
}
else{
val = false;
}
}



void deposit(){
int amount;
cout<<"Enter Amount to deposit: "<<endl;
cin>>amount;
if(amount <= 0){
cout<<"Invalid input: \n"<<endl;
return ;
}
else{
balance += amount;
cout<<"Amount deposited Sucessfully!\n"<<endl;
string record = string("Deposited ₹ ") + to_string(amount);
transaction.push_back(record);
}
}

void withdraw(){
int amount;
cout<<"Enter Amount to withdraw: "<<endl;
cin>>amount;
if(amount <= 0 || amount > balance){
cout<<"Invalid input"<<endl;
return;
}
else{
balance -= amount;
cout<<"Amount Withdrawn Sucessfully!\n"<<endl;
string record = string("Withdrawn ₹ ") + to_string(amount);
transaction.push_back(record);
}
}

void transhistory(){
if(transaction.empty() == 1){
cout<<"No transaction done yet\n"<<endl;
return;
}
else{
cout<<"Transaction history: \n"<<endl;
for(auto x : transaction){
cout<<x<<endl<<endl;
}
cout<<"Remaining balance: "<<balance<<endl<<endl;
}
}

void checkbalance(){
cout<<"Remaining Balance : "<<balance<<endl;
}

};
int main(){
Bank bank;
bank.createacc();
bank.security();

if(bank.val == true){
int op = 0;
while(op != 5 ){
cout<<"Choose operation: "<<endl;
cout<<"1. Deposit"<<endl;
cout<<"2. Withdraw"<<endl;
cout<<"3. Transaction history"<<endl;
cout<<"4. Check balance"<<endl;
cout<<"5. Exit\n"<<endl;
cout<<"Enter option no: "<<endl;
cin>>op;
cin.ignore();
if(op == 1){
bank.deposit();
}
else if(op == 2){
bank.withdraw();
}
else if(op == 3){
bank.transhistory();
}
else if(op == 4){
bank.checkbalance();
}
else{
cout<<"Thanks for using, Have a Good day:)"<<endl;
break;
}
}
}
else{
cout<<"Invalid Username / pin \n"<<endl;
}
return 0;
}



    