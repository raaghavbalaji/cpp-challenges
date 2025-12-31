#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int unique[n];
int size = 0;

for(int i = 0; i < n; i++){
bool flag  = false;
for(int j = 0; j < size; j++){
if(arr[i] == unique[j]){
flag = true;
break;
}
}
if(flag == false){
unique[size] = arr[i];
size ++;
}
}
for(int i = 0; i < size; i++){
    cout << unique[i] << " ";
}
return 0;
}