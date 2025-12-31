#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);
int start = 0;
int end = n.length() - 1;
while(start < end){
char temp = n[start];
n[start] = n[end];
n[end] = temp;

start ++;
end --;
}
cout<<"The reverse of the string: "<<n<<endl;

return 0;
}