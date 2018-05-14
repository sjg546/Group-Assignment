#include <iostream>

#ifndef MOVIE_H
#define MOVIE_H

using namespace std;

class Movie{

public:

  string movieName;
  int movieTime;

  //default state constructor for movie object
  Movie();
  Movie(string name, int mtime);

  //returning movie name and movie time
  void setMovieName(string name);
  void setMovieTime(int movTime);
  string getMovieName();
  int getMovieTime();
  ~Movie();


};
#endif// defining the movie class
