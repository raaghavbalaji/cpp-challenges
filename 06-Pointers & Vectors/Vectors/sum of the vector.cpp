#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> wel;
int n; 
cout<<"Enter the size: "<<endl;
cin>>n;
cout<<"Enter elements: "<<endl;
for(int i = 0; i < n; i ++){
int val;
cin>>val;
wel.push_back(val);
}
int sum = 0;
for(int i = 0; i < n; i ++){
sum += wel[i];
}
cout<<"Sum of the vector: "<<sum<<endl;
return 0;
}
    