#include <iostream>
#include "movie.h"


using namespace std;

Movie::Movie(){
  movieName = "Default";
  movieTime = 0000;
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


Movie::~Movie(){

}
