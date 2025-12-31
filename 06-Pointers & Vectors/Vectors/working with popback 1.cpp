#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size: "<<endl;
cin>>n;
vector<int> wel;
for(int i = 0; i < n; i ++){
int val;
cin>>val;
wel.push_back(val);
}
wel.pop_back();

if(wel.empty()){
cout<<"Vector is empty: "<<endl;
}
else{
cout<<"Remaining vector after removing last element: ";
for(int i = 0; i < wel.size(); i ++){
cout<<wel[i]<<" ";
}
cout<<endl;
}
return 0;
}