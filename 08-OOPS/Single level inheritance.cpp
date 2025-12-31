#include<bits/stdc++.h>
using namespace std;
class Student{
protected:
string name;
int roll_no;
};

class Marks : public Student{
private:
int a;
int b;
int c;

public:
void getdetails(){
cout<<"Enter name: ";
getline(cin, name);
cout<<endl;
cout<<"Enter roll no: ";
cin>>roll_no;
cout<<endl;
cout<<"Enter marks of three subject: ";
cin>>a>>b>>c;
cout<<endl;
}
void display(){
cout<<"Name: "<<name<<endl<<endl;
cout<<"Roll no: "<<roll_no<<endl<<endl;
cout<<"Total mark: "<<(a + b + c)<<endl<<endl;
cout<<"Average: "<<(a + b + c) / 3.0<<endl<<endl;
}
};
int main(){
Marks marks;
marks.getdetails();
marks.display();
return 0;
}

    