#include <iostream>
#include "cinema.h"


using namespace std;

int main(){

  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();
  int input;

  Movie InfinityWar;

  //have to create movies like this
  InfinityWar.setMovieName("Infinity War");
  InfinityWar.setMovieTime(149);

    // cout<<"Welcome to Big Cinema booking System"<<endl;
    // cout<<"Please Select an Option from Below!!"<<endl<<endl;
    // cout<<"1.List Movies"<<endl<<"2.List Booked Tickets"<<endl<<"3.View Purchased Tickets"<<endl;

  cina->addMovie(InfinityWar);
  //cina->printMovies();
  InfinityWar.bookTicket(4,5);
  InfinityWar.printMovieTickets();

  return 0;
}
