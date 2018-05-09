#ifndef MOVIE_H
#define MOVIE_H

using namespace std;

class Movie{

public:
  //default state constructor for movie object
  Movie();
  Movie(string name, int time);
  //returning movie name and movie time
  string getMovieName();
  int getMovieTime();

private:
  string movieName;
  int movieTime;

};
#endif// defining the movie class
