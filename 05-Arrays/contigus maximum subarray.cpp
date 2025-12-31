#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array;  "<<endl;
for(int i= 0; i < n; i++){
cin>>arr[i];
}
int maxsum = arr[0];
int currentsum = arr[0];
for(int i = 1; i < n; i++){
currentsum = max(arr[i], currentsum + arr[i]);
maxsum = max(maxsum, currentsum);
}
cout<<"Maximum subarray = "<<maxsum<<endl;
return 0;
}