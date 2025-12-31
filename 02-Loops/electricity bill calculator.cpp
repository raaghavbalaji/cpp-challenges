#include<iostream>
using namespace std;

int main() {
float unit;
cout << "Enter units consumed: ";
cin >> unit;

float rupee = 0, total = 0;

if(unit <= 0) {
cout << "Invalid input" << endl;
}
else {
if(unit <= 50) {
rupee = unit * 0.50;
}
else if(unit <= 150) {
rupee = (50 * 0.50) + ((unit - 50) * 0.75);
}
else if(unit <= 250) {
rupee = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
}
else {
rupee = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
}
total = rupee + (rupee * 0.20); // adding 20% surcharge
cout << "Total bill: Rs. " << total << endl;
}
return 0;
}