#include<bits/stdc++.h>
using namespace std;
class Student{
private:
string name;
int a;
int b;
int c;

public:
void details(){
cout<<"Enter name: "<<endl;
getline(cin, name);
cout<<"Enter all three subject marks: "<<endl;
cin>>a>>b>>c;
}
void report(){
cout<<"Student details: "<<endl;
cout<<"Name of the student: "<<name<<endl;
int total = ((a + b) + c);
cout<<"Total: "<<total<<endl;
cout<<"Percentage: "<<setprecision(4)<<(double)total/3<<"%"<<endl;
}
};
int main(){
Student student;
student.details();
student.report();
return 0;
}
    