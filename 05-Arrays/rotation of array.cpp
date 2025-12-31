#include<iostream>
#include<string>
using namespace std;
void leftrotate(int n, int k, int arr[]){
k = k % n;
for(int r = 0; r < k; r++){
int first = arr[0];
for(int i = 0; i < n - 1; i++){
arr[i] = arr[i + 1];
}
arr[n-1] = first;
}
}

void rightrotate(int n, int k, int arr[]){
k = k % n;
for(int r = 0; r < k; r++){
int last = arr[n - 1];
for(int i = n - 1; i > 0; i--){
arr[i] = arr[i -1];
}
arr[0] = last;
}
}


int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
}
int k;
cout<<"Enter k: "<<endl;
cin>>k;

char choice;
cout<<"What side do u want ( l for left and r for right): "<<endl;
cin>>choice;

if(choice == 'l' || choice =='L'){
leftrotate(n, k, arr);
}

else if(choice == 'r' || choice == 'R'){
rightrotate(n, k, arr);
}
cout<<"Array after "<<choice<<" roatation: "<<endl;
for(int i = 0; i < n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
