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
int index1;
cout<<"Enter index of first element: "<<endl;
cin>>index1;

int index2;
cout<<"Enter index of second element: "<<endl;
cin>>index2;

int in1;
int in2;

in1 = wel[index1];
in2 = wel.at(index2);

cout<<"Element of index "<<index1<<": "<<in1<<endl;
cout<<"Element of index "<<index2<<": "<<in2<<endl;

cout<<"First element: "<<wel[0]<<endl;

cout<<"Last element: "<<wel.at(n - 1)<<endl;
return 0;
}
    