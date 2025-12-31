#include<bits/stdc++.h>
using namespace std;
class Book{
private:
string title;
string author;
bool isavailable;

public:
Book(string t, string a){
title = t;
author = a;
isavailable = true;
}

string getTitle()const{
return title;
}

string getAuthor()const{
return author;
}

bool getAvailability()const{
return isavailable;
}

void borrowbook(){
isavailable = false;
}

void returnbook(){
isavailable = true;
}
};

class Library{

private:
vector<Book>books;

public:

void addbook(string title, string author){
books.push_back(Book(title, author));
cout<<title<<" by "<<author<<" is added to library 👍🏻"<<endl<<endl;
}

void borrowbook(string title){
for(auto &book : books){
if(book.getTitle() == title){
if(book.getAvailability()){
book.borrowbook();
cout<<title<<" is borrowed successfully"<<endl<<endl;
return;
}
else{
cout<<"book already borrowed"<<endl<<endl;
}
}
}
cout<<"Book not found🧐"<<endl<<endl;
}

void returnbook(string title){
for(auto &book : books){
if(book.getTitle() == title){
if(!book.getAvailability()){
book.returnbook();
cout<<"Book returned successfully👍🏻"<<endl<<endl;
return;
}
else{
cout<<"Books was not borrowed"<<endl<<endl;
}
}
}
cout<<"Book not found"<<endl<<endl;
}

void displayAvailablebooks(){
cout<<"Available books:"<<endl;
bool found = false;
for(auto &book : books){
if(book.getAvailability()){
cout<<book.getTitle()<<" by "<<book.getAuthor()<<endl;
found = true;
}
}
if(!found){
cout<<"No available books"<<endl<<endl;
}
}
};
int main(){
Library lib;
int op = 0;
while(op != 5){
cout<<"Choose any option: "<<endl;
cout<<"1.Add book"<<endl;
cout<<"2.Borrow book"<<endl;
cout<<"3.return book"<<endl;
cout<<"4.display available books"<<endl;
cout<<"5.exit"<<endl<<endl;
cout<<"Choose a option: "<<endl;
cin>>op;
cin.ignore();
if(op == 1){
string title, author;
cout<<"Enter title of the book"<<endl;
getline(cin, title);
cout<<"Enter the name of the author"<<endl;
getline(cin, author);
lib.addbook(title, author);
}
if(op == 2){
string title;
cout<<"Enter title of the book"<<endl;
getline(cin, title);
lib.borrowbook(title);
}
if(op == 3){
string title;
cout<<"Enter title of the book"<<endl;
getline(cin, title);
lib.returnbook(title);
}
if(op == 4){
lib.displayAvailablebooks();
}
if(op == 5){
cout<<"exiting library system"<<endl<<endl;
}
else{
cout<<"Invalid option"<<endl;
}
}
return 0;
}

    