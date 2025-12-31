#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a size of array: "<<endl;
cin>>n;
int arr[n];
double sum = 0;
cout<<"Enter the elements: "<<endl;
for(int i = 0; i < n; i++){
cin>>arr[i];
sum += arr[i];
}
sum = sum / n;
cout<<"Average = "<<sum<<endl;
return 0;
}


