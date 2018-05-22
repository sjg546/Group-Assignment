#include<iostream>
#include "movie.h"
#include "person.h"

#ifndef CINEMA_H
#define CINEMA_H

using namespace std;

class Cinema{

public:
  string cinemaName;
  int schedule[5];
  //declaring how many seats there are in the cinema
  int cinemaSeats[10][30];
  int movieNo;
  Movie *movies;
  Cinema();
  Cinema(string cinName);
  string getCinemaName();
  int getCinemaNo();
  void setCinemaName(string name);
  void printMovies();
  void calculateSchedule();
  void printSeatLayout();
  int getMovieID();
  void printMovieName(int a);
  //once the movie is booked and changed update the array
  void updateMovie(int a,Movie movie);
  void addMovie(Movie movie1);
  Movie getMovie(int movieNo);



};
#endif //defining cinema class
