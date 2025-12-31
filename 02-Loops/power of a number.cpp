#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter base number: "<<endl;
cin>>a;
int b;
cout<<"Enter power: "<<endl;
cin>>b;
double result = 1;

int exp = (b < 0)? -b : b;


for(int i = 0; i < exp; i++){
result *= a;
}


if(b < 0){
result = 1.0 / result;
}
cout<<a<<" ^ "<<b<<" = "<<result<<endl;
return 0;
}
    