#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i= 0;  i < n; i++){
cin>>arr[i];
}
int start = 0;
int end = n - 1;
while (start < end){
swap(arr[start], arr[end]);
start ++;
end --;
}
cout<<"Reverse of the array: ";
for(int i = 0; i < n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
    