#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n - 1];
cout<<"Enter the elements of array;  "<<endl;
for(int i= 0; i < n - 1; i++){
cin>>arr[i];
}
int xor1 = 0, xor2 = 0;
for(int i = 1; i <= n; i++){
xor1 ^= i;
}
for(int i = 0; i < n- 1; i ++){
xor2 ^= arr[i];
}
int missing = xor1 ^ xor2;
cout<<missing<<endl;
return 0;
}