#include<bits/stdc++.h>
using namespace std;
int main(){
srand(time(0));
int randnum = rand() % 4 + 1;
switch(randnum){
case 1: cout<<"You won laptop"<<endl;
break;

case 2:cout<<"You won playstation"<<endl;
break;

case 3:cout<<"You won nothing,Good luck next time"<<endl;
break;

case 4:cout<<"You won one rupee"<<endl;
break;

case 5:cout<<"You won sony Tv"<<endl;
break;
}
return 0;
}

