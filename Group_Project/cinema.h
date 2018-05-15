#include<iostream>
#include "movie.h"

#ifndef CINEMA_H
#define CINEMA_H

using namespace std;

class Cinema{

public:
  string cinemaName;
  //declaring how many seats there are in the cinema
  int cinemaSeats[10][30];
  int movieNo;
  Movie *movies;
  Cinema();
  Cinema(string cinName);
  string getCinemaName();
  int getCinemaNo();
  void printMovies();
  //once the movie is booked and changed update the array
  void updateMovie(int a,Movie movie);
  void addMovie(Movie movie1);
  Movie getMovie(int movieNo);



};
#endif //defining cinema class
