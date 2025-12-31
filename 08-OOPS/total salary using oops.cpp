#include<bits/stdc++.h>
#include<string>
using namespace std;
class Sal{
private:
string name;
int base_salary;
int bonus;

public:
Sal(string n, int b, int bo) : name(n), base_salary(b), bonus(bo) {
}

int totalcalculation(){
return base_salary + bonus;
}

void display(){
cout << "Employee: " << name << endl<<endl;
cout << "Total Salary: " << totalcalculation() << endl;
}
};
int main() {
string name;
int base_salary;
int bonus;

cout << "Name: ";
getline(cin, name);
cout << "Base Salary: ";
cin >> base_salary;
cout << "Bonus: ";
cin >> bonus;

Sal emp(name, base_salary, bonus);
emp.display();
return 0;
}