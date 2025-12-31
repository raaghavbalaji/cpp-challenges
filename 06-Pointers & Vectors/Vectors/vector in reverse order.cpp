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
cout<<"Vector in reverse order: ";
for(int i = n - 1; i >= 0; i --){
cout<<wel[i]<<" ";
}
cout<<endl;
return 0;
}
    