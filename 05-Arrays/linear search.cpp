#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i= 0; i < n; i++){
cin>>arr[i];
}
int target;
cout<<"Enter target element: "<<endl;
cin>>target;

bool found = false;

for(int i = 0; i < n; i++){
if (arr[i] == target){
cout<<"Element found at index "<<i<<endl;
found = true;
break;
}
}
if(!found){
cout<<"Element not found"<<endl;
}
return 0;
}