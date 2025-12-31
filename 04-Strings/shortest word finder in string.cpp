#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int len = n.length();

string shortest = "";
string current = "";

for(int i = 0; i <= len; i++){

if(i < len && n[i] != ' '){

current += n[i];

}

else{

if(!current.empty()){

if(shortest.empty() || current.length() < shortest.length()){

shortest = current;

}

current.clear();

}

}

}
cout<<"Shortest word: "<<shortest<<endl;
cout<<"Length of the word "<<shortest.length()<<endl;
return 0;
}