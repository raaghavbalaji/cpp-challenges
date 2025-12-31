#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n - 1];
cout<<"Enter the elements of array;  "<<endl;
for(int i= 0; i < n - 1; i++){
cin>>arr[i];
}
int expectedsum = 0, actualsum = 0, missing;

expectedsum = n * (n + 1) / 2;

for(int i = 0; i < n - 1; i++){
actualsum += arr[i];
}
missing = expectedsum - actualsum;
cout<<missing<<endl;
return 0;
}


