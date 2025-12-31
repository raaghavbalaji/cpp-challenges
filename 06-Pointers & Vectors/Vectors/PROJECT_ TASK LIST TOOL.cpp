#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
vector<string>tasks;
cout<<"Welcome to task list tool :) "<<endl;
cout<<"Menu:"<<endl;
cout<<"TYPE 1 -->ADD TASK"<<endl;
cout<<"TYPE 2 --> VIEW TASK"<<endl;
cout<<"TYPE 3 --> REMOVE TASK"<<endl;
cout<<"TYPE 4 --> QUIT"<<endl;
int choice;
while(true){
cout<<"Enter a choice: "<<endl;
cin>>choice;
cin.ignore();

if(choice == 1){
string task;
cout<<"Enter a task: "<<endl;
getline(cin, task);
tasks.push_back(task);
cout<<"Task-->\""<<task<<"\"  added succesfully!"<<endl;
cout<<"Total tasks: "<<tasks.size()<<endl;
}

else if(choice == 2){
if(tasks.empty()){
cout<<"No tasks available"<<endl;
}
else{
cout<<"Your tasks: "<<endl;
for(int i = 0; i < tasks.size(); i++){
cout<<i + 1<<". "<<tasks[i]<<endl;
}
cout<<"Total tasks: "<<tasks.size()<<endl;
}
}

else if(choice == 3){
int tasknum;
cout<<"enter the task number to remove: "<<endl;
cin>>tasknum;

if(tasknum >= 1 && tasknum <= tasks.size()){
string removedtask = tasks[tasknum - 1];
tasks.erase(tasks.begin() + tasknum - 1);
cout<<"Task \""<<removedtask<<"\"removed successfully!"<<endl;

if(tasks.empty()){
cout<<"No tasks remaining"<<endl;
}

else{
cout<<"Remaining tasks: ";
for(int i = 0; i < tasks.size(); i ++){
cout<<i + 1<<". "<<tasks[i]<<endl;
}
}
cout<<"Total tasks: "<<tasks.size()<<endl;
}
else{
cout<<"Error. Invalid tasknumber"<<endl;
}
}
else if(choice == 4){
std::cout << "Thank you for using Task List Tool!" << std::endl;
break;
}
else {
std::cout << "Invalid choice. Please try again." << std::endl;
}
}
return 0;
}