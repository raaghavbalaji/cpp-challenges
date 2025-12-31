#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter any number: "<<endl;
cin>>n;
int count = 0;
if(n == 0){
count = 1;
}
else{
count = floor(log10(abs(n))) + 1;
}
cout<<"The number has "<<count<<" digits"<<endl;
return 0;
}
