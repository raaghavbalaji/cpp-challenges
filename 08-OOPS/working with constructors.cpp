#include<bits/stdc++.h>
using namespace std;
class Book{
private:
string title;
string author;
double price;
double rating;

public:
//Default constructer
Book() : title("unknown"), author("unknown"), price(0), rating(0){
}

//Parameterised constructor
Book(string t, string a, double p, double r) : title(t), author(a), price(p), rating(r){
}

//copy constructor
Book(const Book& other):title(other.title), author(other.author), price(other.price), rating(other.rating){
}

//method
void display(const string& label){
cout<<"\n"<<label<<endl;
cout<<"Book details: "<<endl;
cout<<"Title: "<<title<<endl;
cout<<"Author: "<<author<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Rating: "<<rating<<endl;
}

~Book(){
cout<<"Destructor"<<endl;
}
};
int main(){
Book book;
book.display("Default constructor");
string t, a;
cout<<"Enter title and author: "<<endl;
getline(cin, t);
getline(cin, a);
double p, r;
cout<<"Enter price and rating"<<endl;
cin>>p>>r;

Book parambook(t, a, p, r);
parambook.display("Parameterized constructor");

Book copy = parambook;
copy.display("Copy constructor");
return 0;
}
