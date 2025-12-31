#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array(in ascending order);  "<<endl;
for(int i= 0; i < n; i++){
cin>>arr[i];
}
int target;
cout<<"Enter target element: "<<endl;
cin>>target;

bool found = false;
int low = 0, high = n - 1;

while(low <= high){
int mid = (low + high )/ 2;
if(arr[mid] == target){
cout<<"target element is found in index "<<mid<<endl;
found = true;
break;
}
else if (arr[mid] < target){
low = mid + 1;
}
else if(arr[mid] > target){
high = mid  - 1;
}
}
if(!found){
cout<<"Element not found"<<endl;
}
return 0;
}


