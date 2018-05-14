#include <iostream>
#include "cinema.h"


using namespace std;

int main(){

  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();

  int input;
  int ticketX;
  int ticketY;
  bool running =true;
  Movie InfinityWar;

  //have to create movies like this
  cina->addMovie(InfinityWar);
  InfinityWar.setMovieName("Infinity War");
  InfinityWar.setMovieTime(149);

//actual running of the progragm
  cout<<"Welcome to Big Cinema booking System"<<endl;
  cout<<"Press 1 to Book Tickets"<<endl;

  cin>>input;




  if(input == 1){
    while(running == true){
    cout<<"Enter Seat You Would Like To Book"<<endl;
    cin>> ticketX;
    cin>> ticketY;
    InfinityWar.bookTicket(ticketX,ticketY);
    cout<<"Would You Like to Book another Ticket? \nPress 1 to book another Ticket    2 To Print Booked Tickets     3 to Exit"<<endl;
    cin>>input;
    if(input == 2){
      InfinityWar.printMovieNumbers();
    }
    if(input ==3){
      running =false;
    }
  }

  InfinityWar.printMovieTickets();
  }

  //cina->printMovies();


  return 0;
}
