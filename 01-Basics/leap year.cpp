#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a year: "<<endl;
cin>>n;
if(( n % 4 == 0 && n % 100 != 0 ) || (n % 100 == 0 && n % 400 == 0)) {
cout<<"It is leap year"<<endl;
}
else{
cout<<"It is not leap year"<<endl;
}
return 0;
}