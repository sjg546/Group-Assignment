#include <iostream>
#include "cinema.h"


using namespace std;

int main(){

  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();
  //variable declaratio
  int input;
  int ticketX;
  int ticketY;
  int movieSelection = 0;
  bool running =true;
  Movie InfinityWar, tempMovie;


  //have to create movies like this
  cina->addMovie(InfinityWar);
  InfinityWar.setMovieName("Infinity War");
  InfinityWar.setMovieTime(149);

  tempMovie = cina->getMovie(movieSelection);

  //actual running of the progragm
  cout<<"Welcome to Big Cinema booking System"<<endl;
  cout<<"Press 1 to Book Tickets"<<endl;

  //input variable
  cin>>input;


  if(input == 1){
    while(running == true){
    cout<<"Enter Seat You Would Like To Book"<<endl;
    cin>> ticketX;
    cin>> ticketY;
    //checking if the ticket is already booked
    if(tempMovie.isTicketBooked(ticketX,ticketY)==false){
    tempMovie.bookTicket(ticketX,ticketY);
    }else{
    cout<<"Sorry that Ticket has already been Booked!!! \n\n";
    }
    cout<<"Would You Like to Book another Ticket? \nPress 1 to book another Ticket    2 To Print Booked Tickets     3 to Exit"<<endl;
    cin>>input;
    if(input == 2){
      tempMovie.printMovieNumbers();
    }
    if(input ==3){
      running =false;
    }
  }

  tempMovie.printMovieTickets();
  }

  cina->updateMovie(movieSelection,tempMovie);
  return 0;
}
