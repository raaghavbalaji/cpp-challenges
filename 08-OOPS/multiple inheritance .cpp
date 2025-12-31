#include<bits/stdc++.h>
using namespace std;
class Book{
protected:
string name;
string author;
float price;

public:
Book(string n, string a, float p) : name(n), author(a), price(p){
}

virtual void display(){
cout<<"Name: "<<name<<endl<<endl;
cout<<"Author: "<<author<<endl<<endl;
cout<<"Price: "<<price<<endl<<endl;
}
};

class Publisher{
protected:
string publisher_name;
string city;

public:
Publisher(string pub, string c) : publisher_name(pub), city(c){}

virtual void display(){
cout<<"Publisher name: "<<publisher_name<<endl<<endl;
cout<<"City: "<<city<<endl<<endl;
}
};

class LibraryDetails : public Book, public Publisher{
int library_id;
int shelf_no;

public:
LibraryDetails(string n, string a, float p, string pub, string c, int id, int no) : Book(n, a, p), Publisher(pub, c), library_id(id), shelf_no(no){
}

void display() override{
Book::display();
Publisher::display();
cout<<"Library id: "<<library_id<<endl<<endl;
cout<<"Shelf no: "<<shelf_no<<endl<<endl;
}
};

int main(){
string name, author, publisher_name, city;
float price;
int library_id, shelf_no;
cout<<"------------------Library Details -----------------"<<endl<<endl;
cout<<"Name: ";
getline(cin, name);
cout<<endl;
cout<<"Author: ";
getline(cin, author);
cout<<endl;
cout<<"Price: ";
cin>>price;
cin.ignore();
cout<<endl;
cout<<"Publisher name: ";
getline(cin, publisher_name);
cout<<endl;
cout<<"City: ";
getline(cin, city);
cout<<endl;
cout<<"Library id: ";
cin>>library_id;
cout<<endl;
cout<<"Shelf no: ";
cin>>shelf_no;
cout<<endl;

LibraryDetails lb(name, author, price, publisher_name, city, library_id, shelf_no);
cout<<endl;
lb.display();
return 0;
}