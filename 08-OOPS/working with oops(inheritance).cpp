#include<bits/stdc++.h>
using namespace std;
class Employee{
protected:
string name;
int id;
int base_salary;

public:
Employee() {}

Employee(string n, int i, int base) : name(n), id(i), base_salary(base){
}

virtual void display(){
cout<<"Name: "<<name<<endl;
cout<<"ID: "<<id<<endl;
cout<<"Base Salary: "<<base_salary<<endl;
}

virtual ~Employee(){}
};

class Manager : public Employee{
public:
Manager(string n, int i, double b) : Employee(n, i, b) {}
void display() override{
int tot = base_salary + ( base_salary * 0.3) + 5000;
cout << "Employee Type: Manager" << endl;
cout << "Name: " << name << endl;
cout << "ID: " << id << endl;
cout << "Base Salary: " << base_salary << endl;
cout << "Total Salary: " << tot << endl;
}
};

class Developer : public Employee{
public:

Developer(string n, int i, double b) : Employee(n, i, b) {}
void display() override{
int total = base_salary + ( base_salary * 0.2) + 2000;
cout << "Employee Type: Developer" << endl;
cout << "Name: " << name << endl;
cout << "ID: " << id << endl;
cout << "Base Salary: " << base_salary << endl;
cout << "Total Salary: " << total << endl;
}
};

int main(){
Employee *e = nullptr;
int choice;
cout << "Choose employee type:"<<endl;
cout<<"1. Manager"<<endl;
cout<<"2. Developer"<<endl;
cout<<"Enter choice: ";
cin>>choice;

string n;
int i, base;
cout<<"Enter Name: "<<endl;
cin.ignore();
getline(cin, n);
cout<<"Enter Id: "<<endl;
cin>>i;
cout<<"Enter salary: "<<endl;
cin>>base;

if(choice == 1){
e = new Manager(n, i, base);
}

else if(choice == 2){
e = new Developer(n, i, base);
}

else{
cout<<"Invalid choice"<<endl;
return 0;
}

e->display();

delete e;
return 0;
}