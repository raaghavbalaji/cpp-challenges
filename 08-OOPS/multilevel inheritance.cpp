#include<bits/stdc++.h>
using namespace std;
class Employee{
protected:
string Employee_name;
int id;

public:
Employee(string name = "", int i = 0) : Employee_name(name), id(i){
}
void getEmployeedetails(){
cout<<"Employee Name: ";
getline(cin, Employee_name);
cout<<endl;
cout<<"Id: ";
cin>>id;
cin.ignore();
}
};

class Department : public Employee{
protected:
string department_name;

public:
Department(string name = "", int i = 0, string dep = "") : Employee(name, i), department_name(dep){
}

void getdepdetails(){
getEmployeedetails();
cout<<"Department: ";
getline(cin, department_name);
cout<<endl;
}
};

class Salary : public Department{
protected:
float basic, hra, da, total;

public:
Salary(string name = "", int i = 0, string dep = "", float b = 0, float h = 0, float d = 0) : Department(name, i, dep), basic(b), hra(h), da(d){
}

void getsalarydetails(){
getdepdetails();
cout<<"Enter basic salary: ";
cin>>basic;
cout<<endl;
cout<<"Enter Hra: ";
cin>>hra;
cout<<endl;
cout<<"Da: ";
cin>>da;
cout<<endl;
total = basic + hra + da;
}

void showdetails(){
cout<<"----------------Employee details----------------"<<endl;
cout<<"Name: "<<Employee_name<<endl<<endl;
cout<<"Id: "<<id<<endl<<endl;
cout<<"Department: "<<department_name<<endl<<endl;
cout<<"Total Salary: "<<total<<endl;
}
};

int main(){
Salary S;
S.getsalarydetails();
S.showdetails();
return 0;
}