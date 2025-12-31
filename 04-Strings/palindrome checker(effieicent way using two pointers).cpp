#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int start = 0;
int end = n.length() - 1;
bool palindrome = true;

while(start < end){
if(tolower(n[start]) != tolower(n[end])){
palindrome = false;
break;
}
start ++;
end --;
}
if(palindrome){
cout<<"It is palindrome"<<endl;
}
else{
cout<<"It is not palindrome"<<endl;
}


return 0;
}