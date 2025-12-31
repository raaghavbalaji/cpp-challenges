#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

reverse(n.begin(), n.end());
cout<<"The reverse of the string: "<<n<<endl;
return 0;
}