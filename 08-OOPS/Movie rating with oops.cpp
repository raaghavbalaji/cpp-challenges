#include<bits/stdc++.h>
using namespace std;
class Movie{
private:
string movie_name;
int year;
double rating;
string thoughts;

public:


void getdetails(){
cout<<"Enter the name of the movie: "<<endl;
getline(cin, movie_name);
cout<<"Enter the year of "<<movie_name<<endl;
cin>>year;
cin.ignore();
cout<<"Enter the rating of "<<movie_name<<endl;
cin>>rating;
cin.ignore();
cout<<"Thoughts about the movie: "<<endl;
getline(cin, thoughts);
}


string report(){
if(rating < 3){
return "Trash";
}
else if(rating < 5){
return "Below average";
}
else if(rating < 7){
return "Average";
}
else if(rating < 8){
return "Above average";
}
else if(rating < 9){
return "Good";
}
else if(rating <= 9.5){
return "Very Good";
}
else if(rating <= 10){
return "Masterpiece (ABSOLUTE CINEMA🙌🏻)";
}
else{
return "Invalid rating";
}
}


void displayrating(){
cout<<endl;
cout<<"*************************"<<endl<<endl;
cout<<"Movie: "<<movie_name<<'\n'<<endl;
cout<<"Year: "<<year<<'\n'<<endl;
cout<<"Rating: "<<rating<<'\n'<<endl;
cout<<"Thougts: "<<thoughts<<'\n'<<endl;
cout<<"Verdict: "<<report()<<endl;
}

};

int main(){
Movie cine;
cine.getdetails();
cine.displayrating();
return 0;
}


