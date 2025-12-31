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
int positive[n], negative[n];
int p = 0, q = 0;
for(int i = 0; i < n; i++){
if(arr[i] > 0){
positive[p++] = arr[i];
}
}
for(int i = 0; i < n; i ++){
if(arr[i] < 0){
negative[q++] = arr[i];
}
}
int i = 0, j = 0, k = 0;
while(i < p && j < q){
arr[k++] = positive[i++];
arr[k++] = negative[j++];
}
while(i < p){
arr[k++] = positive[i++];
}
while(j < q){
arr[k++] = negative[j++];
}
cout<<"Alternating array: ";
for(int i = 0; i < n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}