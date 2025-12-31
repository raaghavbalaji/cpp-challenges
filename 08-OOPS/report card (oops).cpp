#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int marks[3];

public:
void input(){
cout<<"Enter your name: "<<endl;
getline(cin, name);
cout<<"Enter marks for 3 subjects: "<<endl;
for(int i = 0; i < 3; i ++){
cin>>marks[i];
}
cin.ignore();
}
public:
double calculateaverage(){
int sum= 0;
for(int i = 0; i < 3; i++){
sum += marks[i];
}
double average = sum / 3.0;
return average;
}
void display(){
cout<<"Student name: "<<name<<endl;
cout<<"Marks: ";
for(int i = 0; i < 3; i++){
cout<<marks[i]<<" ";
}
cout<<"Average: "<<calculateaverage()<<endl;
}
};
int main() {
Student s;
s.input();
s.display();
return 0;
}