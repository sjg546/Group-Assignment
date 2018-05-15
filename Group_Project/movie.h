#include <iostream>

#ifndef MOVIE_H
#define MOVIE_H

using namespace std;

class Movie{

public:

  string movieName;
  int movieTime;
  int movieSeats[10][30];
  //default state constructor for movie object
  Movie();
  Movie(string name, int mtime);
  //returning movie name and movie time
  void setMovieName(string name);
  void setMovieTime(int movTime);
  void printMovieNumbers();
  string getMovieName();
  int getMovieTime();
  void bookTicket(int a, int b);
  bool isTicketBooked(int a, int b);
  
  void printMovieTickets();
  ~Movie();
};
#endif// defining the movie class
