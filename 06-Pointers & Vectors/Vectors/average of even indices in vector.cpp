#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> wel;
for(int i = 0; i < n; i ++){
int val;
cin>>val;
wel.push_back(val);
}
int sum = 0;
int count = 0;
for(int i = 0; i < wel.size(); i++){
if(i % 2 == 0){
sum += wel[i];
count ++;
}
}
if(count > 0){
double average = (double)sum / count;
cout<<"average: "<<average<<endl;
}
else{
cout<<"No elements at even indices"<<endl;
}
return 0;
}