#include<bits/stdc++.h>
using namespace std;
int main(){
srand(time(NULL));
int op = 0;
while(op != 2){
cout<<"****ROLL A DICE****\n"<<endl;
cout<<"1.Roll"<<endl;
cout<<"2.Exit"<<endl;
cout<<"Select a option( 1 for roll and 2 for exit): "<<endl;
cin>>op;
if (op == 1){
int num = (rand() % 6) + 1;
cout<<"You rolled : "<<num<<endl<<endl;
}
else if(op == 2){
cout<<"Thanks for using"<<endl;
}
else{
cout<<"Alien option"<<endl;
}
}
return 0;
}

    