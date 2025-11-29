#include<iostream>
using namespace std;
int main(){
char n;
cout<<"Enter a letter: " <<endl;
cin>>n;
if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ){
cout<<"It contains an vowel"<<endl;
}
else{
cout<<"It is consonant"<<endl;
}
return 0;
}