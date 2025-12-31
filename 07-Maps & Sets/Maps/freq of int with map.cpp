#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
map<int, int>count;
for(int i = 0; i < n; i ++){
int num;
cin>>num;
count[num]++;
}
for(auto x : count){
cout<<x.first<<" --> "<<x.second<<"times"<<endl;
}
return 0;
}
    