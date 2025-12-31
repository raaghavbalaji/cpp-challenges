#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;

int* arr = new int[n];

cout<<"Elements of array: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int sum = 0;
for(int i = 0; i < n; i++){
sum += arr[i];
}

cout<<"Sum = "<<sum<<endl;
delete[] arr;
return 0;
}