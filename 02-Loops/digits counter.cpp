#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
int count = 0;
if(n == 0){
count = 1;
}


while(n > 0){
count ++;
n = n / 10;
}
cout<<"The given number has "<<count<<" digits"<<endl;
return 0;
}