#include<bits/stdc++.h>
using namespace std;
class Item{
private:
string item_name;
double price;
int quantity;

public:
Item(string n, double p, int q) : item_name(n), price(p), quantity(q){
}
string getname(){
return item_name;
}
double getprice(){
return price;
}
int getquantity(){
return quantity;
}
void additem(int s){
quantity += s;
}
};

class Cart{
private:
vector<Item>items;

public:
void additems(string name, double price, int quantity){
for(auto &it : items){
if(it.getname() == name){
it.additem(quantity);
return;
}
}
items.push_back(Item(name, price, quantity));
cout<<name<<" --> "<<quantity<<"x "<<"$ "<<price<<endl<<endl;
}

void removeitem(string name){
for(auto pr = items.begin(); pr != items.end(); pr++){
if(pr->getname() == name){
cout<<"Removed "<<name<<" from cart"<<endl<<endl;
items.erase(pr);
return;
}
}
cout<<"Item with such name is not in ur cart"<<endl<<endl;
}

void displaycart(){
if(items.empty()){
cout<<"Cart is empty"<<endl<<endl;
}
else{
double total = 0;
for(auto &it : items){
double subtotal = it.getprice() * it.getquantity();
cout << it.getname() << " (" << it.getquantity() << " x ₹" << it.getprice() << ") = ₹" << subtotal << endl;
total += subtotal;
}
cout << "Total = ₹" << total << endl;
}
}
};
int main(){
Cart cart;
int op = 0;
while(op != 4){
cout<<"1.Add item"<<endl;
cout<<"2.Remove item"<<endl;
cout<<"3.Display cart"<<endl;
cout<<"Exit"<<endl<<endl;
cout<<"choose the correct option: "<<endl;
cin>>op;
cin.ignore();

if(op == 1){
string name;
cout<<"Enter name of the item: \n";
getline(cin, name);
double price;
cout<<"Enter the price of "<<name<<": \n";
cin>>price;
int quantity;
cout<<"Enter the quantity: "<<endl;
cin>>quantity;
cin.ignore();
cart.additems(name, price, quantity);
}

if(op == 2){
string name;
cout<<"Enter name of the item: \n";
getline(cin, name);
cart.removeitem(name);
}

if(op == 3){
cout<<"Available items in cart \n";
cart.displaycart();
}
if(op == 4){
cout<<"exiting the online shopping system"<<endl;
break;
}
else if(op != 1 && op != 2 && op != 3 && op != 4){
cout<<"Invalid option.\n";
}
}
return 0;
}
    