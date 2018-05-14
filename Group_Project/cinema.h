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
  void addMovie(Movie movie);



};
#endif //defining cinema class
