#include <iostream>
#include "movie.h"


using namespace std;

Movie::Movie(){

  movieName = "Default";
  movieTime = 0000;
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

void Movie::setMovieTime(int movTime){
  movieTime = movTime;
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
        cout<<i<<","<<j<<endl;
      }
    }

  }
}
//printing the movie tickets
void Movie::printMovieTickets(){
  for(int i = 0;i<10;i++){
    for(int j = 0;j<30;j++){
      cout<<movieSeats[i][j]<<",";
      //splitting the cinemae into thirds to make it easier to see
      if(j%10 == 0 && j!=0){
        cout<<"       ";
      }
    }
      cout<<endl;
  }
}


Movie::~Movie(){

}