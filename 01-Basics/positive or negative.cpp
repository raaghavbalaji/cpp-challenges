#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<< endl;
cin>>n;
if (n > 0){
cout<<"It is positive"<<endl;
}
else if( n < 0){
cout<<"It is negative"<<endl;
}
else {
cout<<"It is zero"<<endl;
}
return 0;
}