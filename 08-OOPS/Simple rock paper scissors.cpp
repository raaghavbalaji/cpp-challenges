#include<bits/stdc++.h>
using namespace std;
char Userchoice();
char Computerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){

srand(time(0));
cout<<"Rock🪨 Paper📃 Scissor✂️\n"<<endl;
char playagain;
do{
char player = Userchoice();
cout<<"Your choice: ";
showchoice(player);
cout<<endl;

char computer = Computerchoice();
cout<<"Computer choice: ";
showchoice(computer);
cout<<endl;

choosewinner(player, computer);


cout<<"Do you want to play again ? y fo yes and n for no \n"<<endl;
cin>>playagain;

}while(playagain == 'Y' || playagain == 'y');
cout<<"Thanks for Playing :)"<<endl;
return 0;
}


char Userchoice(){
char player;
do{
cout<<"Choose one option: \n"<<endl;
cout<<"r for rock 🪨\n";
cout<<"p for paper 📃 \n";
cout<<"s for scissor ✂️\n"<<endl;
cin>>player;
}while(player != 'r' && player != 'p' && player != 's');
return player;
}

char Computerchoice(){

int num = rand() % 3 + 1;
switch(num){
case 1: return 'r';
break;
case 2: return 'p';
break;
case 3: return 's';
break;
}
}

void showchoice(char choice){
switch(choice){
case 'r': cout<<"Rock🪨"<<endl;
break;
case 'p': cout<<"Paper📃"<<endl;
break;
case 's': cout<<"scissor✂️"<<endl;
break;
}
}

void choosewinner(char player, char computer){
if(player == computer){
cout<<"Its a tie🥶"<<endl;
}
else if(player == 'r' && computer == 's'){
cout<<"You win🔥\n"<<endl;
}
else if(player == 'p' && computer == 'r'){
cout<<"You win🔥\n"<<endl;
}
else if(player == 's' && computer == 'p'){
cout<<"You win🔥\n"<<endl;
}
else{
cout<<"You lost💔\n"<<endl;
}
}

    