#include<iostream>
using namespace std;
int main(){
int n1, n2;
cout<<"Enter the size of first array: "<<endl;
cin>>n1;
int arr1[n1];
cout<<"Enter the size of second array: "<<endl;
cin>>n2;
int arr2[n2];
cout<<"Enter the elements of first array;  "<<endl;
for(int i= 0; i < n1; i++){
cin>>arr1[i];
}

cout<<"Enter the elements of second array;  "<<endl;
for(int i= 0; i < n2; i++){
cin>>arr2[i];
}
cout<<"Union of array: ";

bool visited[1000] = {false};

for(int i = 0; i < n1; i++){
if(visited[arr1[i]] == false){
cout<<arr1[i]<<" ";
visited[arr1[i]] = true;
}
}
for(int i = 0; i < n2; i++){
if(visited[arr2[i]] == false){
cout<<arr2[i]<<" ";
visited[arr2[i]] = true;
}
}
cout<<endl;
return 0;
}