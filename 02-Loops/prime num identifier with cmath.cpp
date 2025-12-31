#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
if(n <= 1){
cout<<"not prime";
return 0;
}

bool prime = true;

for(int i = 2; i <= sqrt(n); i++){
if(n % i == 0){
prime = false;
break;
}
}
cout<<(prime?"prime":"not prime")<<endl;
return 0;
}