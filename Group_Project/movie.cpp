#include <iostream>
#include "movie.h"


using namespace std;

Movie::Movie(){

  movieName = "Default";
  movieTime = 0000;
  movieID =0;
//initially populating array with 0's
  for(int i = 0; i<10;i++){
    for(int j = 0; j<30;j++){
      movieSeats[i][j]=0;
    }
  }
}

Movie::Movie(string name,int mtime){
  movieName = name;
  movieTime = mtime;
}
void Movie::setMovieName(string name){
  movieName = name;
}
void Movie::setMovieID(int a){
  movieID = movieID +a;
}
void Movie::setMovieTime(int movTime){
  movieTime = movTime;
}
int Movie::getMovieID(){
  return movieID;
}
string Movie::getMovieName(){
    return movieName;
}
int Movie::getMovieTime(){
  return movieTime;
}

void Movie::bookTicket(int a,int b){
  movieSeats[a][b] = 1;
}
void Movie::printMovieNumbers(){
  cout<<"Your Booked Tickets are"<<endl;
  for(int i = 0 ;i <10;i++){
    for(int j = 0;j<30;j++){
      if(movieSeats[i][j] == 1){
        cout<<"Row - "<<i<< "     Seat - "<<j<<endl;
      }
    }

  }
}
//printing the movie tickets
void Movie::printMovieSeats(){
  cout<<"Row 0: ";
  for(int i = 0;i<10;i++){
    for(int j = 0;j<30;j++){

      cout<<movieSeats[i][j]<<",";
      //splitting the cinema into thirds to make it easier to see
      if(j%10 == 0 && j!=0){
        cout<<"       ";
      }
    }
    if(i<=8){
      cout<<endl<<"Row "<<i+1<<": ";
      }
  }
  cout<<endl;
}

//checking to see if a particular seat is booked and returning true or false depending on whether it is
bool Movie::isTicketBooked(int a,int b){
    if(movieSeats[a][b]==1){
      return true;
    }else{
      return false;
    }
}

Movie::~Movie(){

}
