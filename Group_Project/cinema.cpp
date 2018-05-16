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
void Cinema::setCinemaName(string name){
  cinemaName = name;
}

void Cinema::printMovies(){
  for(int i = 0;i<movieNo;i++){
    cout<< i<<"."<<movies[i].getMovieName()<<" With a Run Time of "<<movies[i].getMovieTime()<<" Minutes."<<endl;
    }
  }
void Cinema::addMovie(Movie movie){
  //adding movie to the movie array within the movie class
  movies[movieNo] = movie;
  movieNo +=1;
}
void Cinema::updateMovie(int a,Movie movie1){
  movies[a] = movie1;
}
Movie Cinema::getMovie(int movieNo){
  return movies[movieNo];
}
void Cinema::calculateSchedule(){
  int cumulativeTotal = 0;

  for(int i = 0;i<5;i++){
      cumulativeTotal += movies[movieNo].getMovieTime();
        schedule[i] = 900 + cumulativeTotal;
        cout<<"Movie Time: "<< schedule[i]<<endl;
}

}
