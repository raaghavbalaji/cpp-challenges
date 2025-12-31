#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
int balance = 0;

public:
void deposit(){
int sum;
cout<<"Enter the amount: "<<endl;
cin>>sum;
balance += sum;
cout<<"Remaining balance: "<<balance<<endl;

}

public:
void withdraw() {
double amount;
cout<<"Enter amount: "<<endl;
cin>>amount;
if (amount > balance) {
cout<<"Insufficient balance"<<endl;
}
else if(amount <= 0){
cout<<"Invalid amount"<<endl;
}

else{
balance -= amount;
cout<<"Widthraw successfull."<<endl;
cout<<"Remaining balance: "<<balance<<endl;
}
}
public:
void getbalance(){
cout<<"Your account balance: "<<balance<<endl;
}
};
int main(){

BankAccount s;

int option = 0;
while(option != 4){
cout<<"Choose the option: "<<endl;
cout<<"1. deposit"<<endl;
cout<<"2. widthraw"<<endl;
cout<<"3. check balance"<<endl;
cout<<"4. end operation"<<endl;
cout<<"Enter the option no: "<<endl;
cin>>option;
if(option == 1){
s.deposit();
}
else if(option == 2){
s.withdraw();
}
else if (option == 3){
s.getbalance();
}
else if(option == 4){
cout<<"Thanks for using our bank service"<<endl;
}
else{
cout<<"Invalid option: "<<endl;
}
}
return 0;
}