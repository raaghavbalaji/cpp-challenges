#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
int count = 0, sum = 0;
int original = n;


//counting digits


while(n > 0){
n = n / 10;
count ++;
}

//amstrong checker

n = original;
while(n > 0){
int digit = n % 10;
sum += pow(digit, count);
n = n / 10;
}


if(sum == original){
cout<<"The given number is amstrong"<<endl;
}


else{
cout<<"The given number is not amstrong"<<endl;
}
return 0;
}
    