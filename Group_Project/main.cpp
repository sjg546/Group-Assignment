#include <iostream>
#include "cinema.h"


using namespace std;

int main(){

  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();
  cina->setCinemaName("Big Cinema 1");
  //variable declaratio
  int input;
  int ticketX;
  int ticketY;
  int movieSelection = 0;
  bool running =true;
  Movie InfinityWar,deadpool, rapunzel, tempMovie;


  //have to create movies like this

  InfinityWar.setMovieName("Infinity War");
  InfinityWar.setMovieTime(149);

  deadpool.setMovieName("Deadpool");
  deadpool.setMovieTime(110);

  rapunzel.setMovieName("Rapunzel");
  rapunzel.setMovieTime(90);

  //have to define name and stuff before adding to movie class
  cina->addMovie(InfinityWar);
  cina->addMovie(deadpool);
  cina->addMovie(rapunzel);
  //actual running of the progragm
  cout<<"Welcome to Big Cinema booking System"<<endl;
  cout<<cina->getCinemaName()<<" has the movies\n";
  cina->printMovies();

  cout<<"Enter the number to the left of the movie to select\n";

  cin>>input;
  tempMovie = cina->getMovie(input);

  cout<< "You have selected "<<tempMovie.getMovieName()<<endl;

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
