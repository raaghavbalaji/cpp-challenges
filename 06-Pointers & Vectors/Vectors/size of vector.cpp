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
cout<<"Size After adding element "<<wel[i]<<": "<<wel.size()<<endl;
}
cout<<"Total size: "<<wel.size()<<endl;
return 0;
}
    