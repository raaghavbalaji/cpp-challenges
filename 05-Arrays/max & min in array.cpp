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
int max = arr[0];
for(int i = 0; i < n; i++){
if(arr[i] > max){
max = arr[i];
}
}

int min = arr[0];
for(int i = 0; i < n; i++){
if(arr[i] < min){
min = arr[i];
}
}

cout<<"max = "<<max<<endl;
cout<<"min = "<<min<<endl;

return 0;
}