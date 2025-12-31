#include<bits/stdc++.h>
using namespace std;
void drawboard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char player);
bool checkWinner(char *spaces, char player, char computer);
bool checktie(char *spaces);
int main(){
char player = 'X';
char computer = 'O';
char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
bool running = true;
srand(time(0));
drawboard(spaces);
while(running){
playermove(spaces, player);
drawboard(spaces);
if(checkWinner(spaces, player, computer)){
            running = false;
            break;
}
else if(checktie(spaces)){
running = false;
break;
}
computermove(spaces, computer);
drawboard(spaces);
if(checkWinner(spaces, player, computer)){
            running = false;
            break;
}
else if(checktie(spaces)){
running = false;
break;
}
}
return 0;
}
void drawboard(char *spaces){
cout<<'\n';
cout<<"     |     |     "<<endl;
std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " <<spaces[2]<<"  "<<endl;
std::cout << "_____|_____|_____" << '\n';
cout<<"     |     |     "<<endl;
std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " <<spaces[5]<<"  "<<endl;
std::cout << "_____|_____|_____" << '\n';
cout<<"     |     |     "<<endl;
std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " <<spaces[8]<<"  "<<endl;
cout<<"     |     |     "<<endl;
cout<<'\n';
}
void playermove(char *spaces, char player){
int num;
do{
cout<<"Enter number between(1 - 9): "<<endl;
cin>>num;
num --;
if(spaces[num] == ' '){
spaces[num] = player;
break;
}
}while(num < 0 || num > 8);
}

void computermove(char *spaces, char computer){
while(true){
int num = rand() % 9;
if(spaces[num] == ' '){
spaces[num] = computer;
break;
}
}
}

bool checkWinner(char *spaces, char player, char computer){
if((spaces[0] != ' ') && ( spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
spaces[0] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
spaces[3] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
spaces[6] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
spaces[0] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
spaces[2] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
} 
else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
spaces[0] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}   
else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
spaces[1] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
spaces[2] == player ? cout<<"You win \n" : cout<<"You lose"<<endl;
}
else{
return false;      
}
return true;
}

bool checktie(char *spaces){
for(int i = 0; i < 9; i++){
if(spaces[i] == ' '){
return false;
}
}
std::cout << "IT'S A TIE!\n";
return true;
}