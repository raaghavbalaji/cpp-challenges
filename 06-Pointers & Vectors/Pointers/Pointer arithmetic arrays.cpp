#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements of array: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int* ptr = arr;

cout<<"Array elements using pointer: ";
for(int i = 0; i < n; i ++){
cout<<*(ptr + i)<<" ";
}
cout<<endl;
return 0;
}