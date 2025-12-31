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
int max1 = INT_MIN;
int max2 = INT_MIN;

for(int i = 0; i < wel.size(); i++){
if(wel[i] > max1){
max2 = max1;
max1 = wel[i];
}
else if(wel[i] > max2 && wel[i] != max1){
max2 = wel[i];
}
}
if(max2 == INT_MIN){
cout<<"no second largest element found"<<endl;
}
else{
cout<<"second largest element: "<<max2<<endl;
}
return 0;
}