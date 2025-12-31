#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int small = arr[0];
for(int i = 1; i < n; i++){
if(arr[i] < small){
small = arr[i];
}
}
cout<<"smallest elements: "<<small<<endl;
return 0;
}

