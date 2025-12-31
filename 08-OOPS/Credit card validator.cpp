#include<bits/stdc++.h>
using namespace std;
int getDigit(const int number);
int sumOddDigits(const string num);
int sumEvenDigits(const string num);

int main(){
string num;
int result  = 0;
cout<<"Enter credit card number: "<<endl;
cin>>num;
result = sumOddDigits(num) + sumEvenDigits(num);
if(result % 10 == 0){
cout<<"The card is valid"<<endl;
}
else{
cout<<"The card is not valid"<<endl;
}
return 0;
}
int getDigit(const int n){
return (n % 10) + (n / 10 % 10);
}

int sumEvenDigits(string num){
int sum = 0;
for(int i = num.size() - 2; i >= 0; i -= 2){
sum += getDigit((num[i] - '0') * 2);
}
return sum;
}

int sumOddDigits(string num){
int sum = 0;
for(int i = num.size() - 1; i >= 0; i -= 2 ){
sum += num[i]- '0';
}
return sum;
}