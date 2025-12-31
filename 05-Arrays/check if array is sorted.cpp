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
bool sort = true;
for(int i = 0; i < n - 1; i++){
if(arr[i] > arr[i + 1]){
sort = false;
break;
}
}
if(sort){
cout<<"The array is sorted"<<endl;
}
else{
cout<<"The array is not sorted"<<endl;
}



return 0;
}