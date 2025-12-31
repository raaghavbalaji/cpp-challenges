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
int max1 = INT_MIN;
int max2 = INT_MIN;
for(int i = 0; i < n; i++){
if(arr[i] > max1){
max2 = max1;
max1 = arr[i];
}
else if(arr[i] > max2 && arr[i] != max1){
max2 = arr[i];
}
}
if(max2 == INT_MIN){
cout<<"no second largest element found"<<endl;
}
else{
cout<<"second largest element = "<<max2<<endl;
}
return 0;
}