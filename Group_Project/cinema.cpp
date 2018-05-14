#include <iostream>
#include "cinema.h"
#include "movie.h"

using namespace std;

Cinema::Cinema(){
  cinemaName = "??";
  movies = new Movie[5];
  movieNo = 0;
}

Cinema::Cinema(string cinName){
  cinemaName = cinName;

}
string Cinema::getCinemaName(){
  return cinemaName;
}
int Cinema::getCinemaNo(){
  return movieNo;
}

void Cinema::printMovies(){
  for(int i = 0;i<movieNo;i++){
    cout<<movies[i].getMovieName()<<endl;
    cout<<movies[i].getMovieTime()<<endl;
    }
  }
void Cinema::addMovie(Movie movie){
  //adding movie to the movie array within the movie class
  movies[movieNo] = movie;
  movieNo +=1;
}
