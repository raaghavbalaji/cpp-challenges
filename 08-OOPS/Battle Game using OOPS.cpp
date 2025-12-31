#include<bits/stdc++.h>
using namespace std;
class Character{
protected:
string Name;
int Health;
int Power;

public:

Character(string n, int h, int p) : Name(n), Health(h), Power(p){
}

virtual ~Character(){

}

virtual string gettype() const = 0;

virtual void attack(Character& target) = 0;

virtual void takedamage(int dmg){
Health -= dmg;
if(Health < 0)Health = 0;
}

bool isalive()const{
return Health > 0;
}

virtual void displaystats(){
cout<<"Name: "<<Name<<endl;
cout<<"Type: "<<gettype()<<endl;
cout<<"Health: "<<Health<<endl;
cout<<"Power: "<<Power<<endl;
}

string getname(){
return Name;
}

int gethealth(){
return Health;
}


};

class Warrior : public Character{
public:
Warrior(string n, int h, int p) : Character(n, h, p){
}

string gettype() const override{
return "Warrior";
}

void attack(Character& target) override{
cout << Name << " (Warrior) attacks " << target.getname() << "!" << endl<<endl;
target.takedamage(Power);
}

void takedamage(int dmg) override{
int reduced = dmg * 0.8;
Character::takedamage(reduced);
}

};

class Mage : public Character{
public:
Mage(string n, int h, int p) : Character(n, h, p){
}

string gettype() const override{
return "Mage";
}

void attack(Character& target) override{
cout << Name << " (Mage) attacks " << target.getname() << "with Magic!" << endl<<endl;
int magicdamage = Power + rand() % 6;
target.takedamage(magicdamage);
}

void takedamage(int dmg) override{
int inc = dmg * 1.2;
Character::takedamage(inc);
}
};

void battle(Character &c1, Character &c2){
cout<<endl;
cout<<"Battle🔥Started\n"<<endl;
cout<<c1.getname()<<"("<<c1.gettype()<<")"<<"VS "<<c2.getname()<<"("<<c2.gettype()<<")"<<endl<<endl;
while(c1.isalive() && c2.isalive()){

//c1 attacks first
cout<<c1.getname()<<" attacks first "<<endl<<endl;
c1.attack(c2);

if(!c2.isalive()){
cout<<c2.getname()<<" has fallen💀 \n"<<endl;
break;
}
cout << c2.getname() << " HP = " << c2.gethealth() << "\n";


//c2 attacks

cout<<c2.getname()<<" attacks "<<endl<<endl;
c2.attack(c1);

if(!c1.isalive()){
cout<<c1.getname()<<" has fallen💀 \n"<<endl;
break;
}
cout << c1.getname() << " HP = " << c1.gethealth() << "\n";
}
if (c1.isalive()){
cout << "🏆 Winner: " << c1.getname() << " (" << c1.gettype() << ")\n";
}
else{
cout << "🏆 Winner: " << c2.getname() << " (" << c2.gettype() << ")\n";
}
}
int main(){
srand(time(0));

string p1;
cout<<"Enter name of player1: ";
getline(cin, p1);

string p2;
cout<<"Enter name of player2: ";
getline(cin, p2);



Warrior w(p1, 120, 30);
Mage m(p2, 80, 40);

battle(w, m);
return 0;
}