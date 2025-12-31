#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elemnts of array: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int min1 = INT_MAX;
int min2 = INT_MAX;
for(int i = 0; i < n; i++){
if(arr[i] < min1){
min2 = min1;
min1 = arr[i];
}
else if(arr[i] < min2 && arr[i] != min1){
min2 = arr[i];
}
}
if(min2 == INT_MAX){
cout<<"no second smallest element found"<<endl;
}
else{
cout<<"second smallest element = "<<min2<<endl;
}
return 0;
}