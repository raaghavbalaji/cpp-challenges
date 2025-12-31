#include<bits/stdc++.h>
using namespace std;
class Player{
private:
string Name;
int Health;
char Level;
int XP;

public:
Player() : Name(""), Health(0), Level(' '), XP(0) {}

void setName(string n){
if(n.empty()){
cout<<"Name Cannot Be Empty :("<<endl;
}
else{
Name = n;
}
}

void setHealth(int h){
if(h < 0 || h > 100){
cout<<"Health should  be between 0 and 100"<<endl;
}
else{
Health = h;
}
}

void setLevel(char l){
l = toupper(l);
if(l >= 'A' && l <= 'F'){
Level = l;
}
else{
cout<<"Level must be A - F only"<<endl;
}
}

void setXP(int xp){
if(xp >= 0){
XP = xp;
}
else{
cout<<"XP shouldnt be negative"<<endl;
}
}

string getName()const{
return Name;
}
int getHealth()const{
return Health;
}

char getLevel()const{
return Level;
}

int getXP()const{
return XP;
}

void display()const{
cout<<endl;
cout<<"Player Details: \n"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Health: "<<getHealth()<<endl;
cout<<"Level : "<<getLevel()<<endl;
cout<<"XP: "<<getXP()<<endl;
}
};
int main(){
Player p;
string name;
int health;
char level;
int xp;

cout << "Enter name: ";
getline(cin, name);
p.setName(name);

cout << "Enter health: ";
cin >> health;
p.setHealth(health);

cout << "Enter level: ";
cin >> level;
p.setLevel(level);

cout << "Enter XP: ";
cin >> xp;
p.setXP(xp);

p.display();

return 0;
}