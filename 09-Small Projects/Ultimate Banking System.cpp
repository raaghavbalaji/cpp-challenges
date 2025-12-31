#include<bits/stdc++.h>
using namespace std;
class Account{
protected:
string name;
int accountnumber;
int pin;
double balance;
vector<string>transactions;
static int nextaccountnumber;

public:

Account(string n = "", int p = 0, double b = 0.0) : name(n), pin(p), balance(b){
accountnumber =++ nextaccountnumber;
}

virtual string gettype() const = 0;

bool validatepin(int x)const{
return pin == x;
}

virtual void calculateinterest(){
}

virtual void deposit(double amt){
if(amt <= 0){
cout<<"Amount cannot be less than 0\n"<<endl;
return;
}
balance += amt;
cout<<"Amount of ₹"<<amt<<" deposited successfully ! \n"<<endl;
transactions.push_back("Deposited ₹" + to_string(amt));
}

virtual void withdraw(double amt){
if(amt <= 0){
cout<<"Amount cannot be less than 0\n"<<endl;
return;
}
else if(amt > balance){
cout<<"Insufficient Funds\n"<<endl;
return;
}
balance -= amt;
cout<<"Amount of ₹"<<amt<<" withdrawn successfully ! \n"<<endl;
transactions.push_back("Withdrawn ₹" + to_string(amt));
}

void transactionhistory(){
if(transactions.empty()){
cout<<"Transactions are empty\n"<<endl;
return;
}
cout<<"Transaction History: \n"<<endl;
for(string t : transactions){
cout<<"•"<<t<<endl;
cout<<"-----------------------------------------"<<endl;
}
}

virtual void display()const{
cout<<"Account Details: "<<endl<<endl;
cout<<"AccountHolder name: "<<name<<endl<<endl;
cout<<"Account Number: "<<accountnumber<<endl<<endl;
cout<<"Balance: "<<balance<<endl<<endl;
}
string getname(){
return name;
}

double getbalance(){
return balance;
}

int getaccountnumber(){
return accountnumber;
}
virtual ~Account() {}
};
class SavingsAccount : public Account {
private:
double interestrate = 0.04;
public:
SavingsAccount(string n = "", int p = 0, double b = 0.0) : Account(n,p,b){
}

string gettype() const{
return "Savings Account"; 
}

void calculateinterest()override{
double interest = balance * interestrate;
cout<<"Interest: "<<interest<<"\n"<<endl;
char dec;
cout<<"Add interest to balance (Y for Yes & N for No): ";
cin>>dec;
if(dec == 'Y' || dec == 'y'){
balance += interest;
cout<<"Remaining balance: "<<balance<<endl<<endl;
transactions.push_back("Added Interest ₹" + to_string(interest));
}
else if(dec == 'N' || dec == 'n'){
cout<<"Interest not added to balance"<<endl<<endl;
return;
}
else{
cout<<"Invalid choice\n"<<endl;
}
}

void display()const override{
cout<<gettype()<<endl<<endl;
Account::display();
cout<<"Interest rate : 4%"<<endl<<endl;
}
};

class CurrentAccount : public Account{
private:
double minbalance = 1000;

public:


CurrentAccount(string n = "", int p = 0, double b = 0.0) : Account(n, p, b){
}

string gettype()const{
return "Current Account";
}
void withdraw(double amt)override{
if(amt <= 0){
cout<<"Amount cannot be less than 0\n"<<endl;
return;
}
else if(amt > balance){
cout<<"Insufficient Funds\n"<<endl;
return;
}
else if (balance - amt < minbalance) {
cout << "❌ Must maintain minimum balance of ₹1000\n";
return;
}
balance -= amt;
transactions.push_back("Withdrawn ₹" + to_string(amt));
cout << "Withdrawn ₹" << amt<< endl;
}
void display() const override {
cout<<gettype()<<endl<<endl;
Account::display();
cout << "Minimum Balance : ₹1000\n"<<endl;
}
};

class Bank{
private:
vector<Account*>accounts;
public:
~Bank() {
for (Account* acc : accounts) 
delete acc;
}

void createAccount() {
string name;
int pin, type;

cin.ignore();
cout << "Enter name: ";
getline(cin, name);

cout << "Set 4-digit PIN: ";
cin >> pin;

cout << "Choose Account Type:\n1. Savings\n2. Current\n";
cin >> type;

Account *acc = nullptr;

if (type == 1) {
acc = new SavingsAccount(name, pin);
}
else if (type == 2) {
acc = new CurrentAccount(name, pin);
}
else {
cout << "❌ Invalid type\n";
return;
}

accounts.push_back(acc);
cout << "Account Created Successfully!\n";
cout << "Your Account Number = " << acc->getaccountnumber() << "\n\n";
}

Account* login() {
int accNo, pin;
cout << "Enter Account Number: ";
cin >> accNo;

cout << "Enter PIN: ";
cin >> pin;

for (auto acc : accounts) {
if (acc->getaccountnumber() == accNo && acc->validatepin(pin)) {
cout << "\nLogin Successful! Welcome " << acc->getname() << "\n\n";
return acc;
}
}

cout << "Invalid credentials\n\n";
return nullptr;
}
void userMenu(Account *acc) {
while (true) {
cout << "--------- ACCOUNT MENU ---------\n";
cout << "1. Deposit\n";
cout << "2. Withdraw\n";
cout << "3. Show Balance\n";
cout << "4. Show Transactions\n";
cout << "5. Calculate Interest\n";
cout << "6. Logout\n";
cout << "Choose: ";

int ch;
cin >> ch;

if (ch == 1) {
double amt;
cout << "Enter amount: ";
cin >> amt;
acc->deposit(amt);
}
else if (ch == 2) {
double amt;
cout << "Enter amount: ";
cin >> amt;
acc->withdraw(amt);
}
else if (ch == 3) {
cout << "Balance = ₹" << acc->getbalance() << "\n\n";
}
else if (ch == 4) {
acc->transactionhistory();
}
else if (ch == 5) {
acc->calculateinterest();
}
else if (ch == 6) {
cout << "Logged out.\n\n";
break;
}
else {
cout << "Invalid choice\n\n";
}
}
}
void start() {
while (true) {
cout << "=========== DIGI BANK ===========\n";
cout << "1. Create Account\n";
cout << "2. Login\n";
cout << "3. Exit\n";
cout << "Choose: ";

int ch;
cin >> ch;

if (ch == 1) {
createAccount();
}
else if (ch == 2) {
Account* acc = login();
if(acc) userMenu(acc);
}
else if (ch == 3) {
cout << "Exiting Bank System...\n";
break;
}
else {
cout << "Invalid input\n";
}
}
}
};
int Account::nextaccountnumber = 1000;
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

Bank B;
B.start();

return 0;
}
