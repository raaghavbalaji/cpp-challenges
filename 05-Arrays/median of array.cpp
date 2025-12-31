#include<iostream>
#include<algorithm>
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

sort(arr, arr + n);

double median;

if(n % 2 == 1){
median = arr[n / 2];
}

else{
median = ( arr[(n - 1) / 2] + arr[n / 2] ) / 2;
}
cout<<"The median of array is = "<<median<<endl;
return 0;
}