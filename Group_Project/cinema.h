#include<iostream>
#ifndef CINEMA_H
#define CINEMA_H

using namespace std;

class Cinema{
  string cinemaName;
  //declaring how many seats there are in the cinema
  int cinemaSeats[10][30];


public:
  Cinema();
  Cinema(string cinName);
  string getCinemaName();



};
#endif //defining cinema class
