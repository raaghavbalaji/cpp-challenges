#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr1[n];
int arr2[n];
cout<<"Enter the elements of first array;  "<<endl;
for(int i= 0; i < n; i++){
cin>>arr1[i];
}

cout<<"Enter the elements of second array;  "<<endl;
for(int i= 0; i < n; i++){
cin>>arr2[i];
}
cout<<"Merged array: "<<endl;
for(int i = 0; i < n; i++){
cout<<arr1[i]<<" ";
}

for(int i = 0; i < n; i++){
cout<<arr2[i]<<" ";
}

cout<<endl;
return 0;
}

    