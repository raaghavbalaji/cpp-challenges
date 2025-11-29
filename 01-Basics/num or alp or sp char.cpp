#include<iostream>
using namespace std;
int main(){
char n;
cout<<"Enter a character: "<< endl;
cin>>n;
if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
cout<<"It is an alphabet"<<endl;
}
else if( n >= '0' && n <= '9'){
cout<<"It is an number"<<endl;
}
else {
cout<<"It is an Special character"<<endl;
}
return 0;
}