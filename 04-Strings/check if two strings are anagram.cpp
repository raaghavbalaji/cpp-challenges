#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string a;
cout<<"Enter string a: "<<endl;
getline(cin, a);


string b;
cout<<"Enter string b: "<<endl;
getline(cin, b);



if(a.length() != b.length()){
cout<<"It is not anagram"<<endl;
return 0;
}

vector<int>count1(256, 0), count2(256, 0);

for(int i = 0; i < a.length(); i++){
count1[a[i]]++;
count2[b[i]]++;
}

if(count1 == count2){
cout<<"It is anagram"<<endl;
}
else{
cout<<"It is not anagram"<<endl;
}


return 0;
}