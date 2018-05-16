#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include "cinema.h"

using namespace std;

//only accepts numbers need to add bound in function declaration to get
//rid of out of bounds errors
int parseInput(int b){
  int a;
  while((!(cin>>a))&&(a<b)){
    cin.clear();
    cin.ignore(999, '\n');
    cout<<"You Have Not Entered a valid Number\n";
  }
  return a;
}


int main(){
  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();
  cina->setCinemaName("Big Cinema 1");

  //variable declaration
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

  //cina->calculateSchedule();
  //actual running of the progragm
  cout<<"Welcome to Big Cinema booking System"<<endl;
  cout<<cina->getCinemaName()<<" has the movies\n";
  cina->printMovies();

  cout<<"Enter the number to the left of the movie to select\n";

  input = parseInput(3);
  //cin>>input;
  tempMovie = cina->getMovie(input);

  cout<< "You have selected "<<tempMovie.getMovieName()<<endl;

  cout<<"Press 1 to Book Tickets"<<endl;

  //input variable
  input = parseInput(1);

  if(input == 1){
    while(running == true){
    cout<<"Enter Seat You Would Like To Book"<<endl;
    ticketX = parseInput(10);
    ticketY = parseInput(30);
    //checking if the ticket is already booked
    if(tempMovie.isTicketBooked(ticketX,ticketY)==false){
    tempMovie.bookTicket(ticketX,ticketY);
    }else{
    cout<<"Sorry that Ticket has already been Booked!!! \n\n";
    }
    cout<<"Would You Like to Book another Ticket? \nPress 1 to book another Ticket    2 To Print Booked Tickets     3 to Exit"<<endl;
    input = parseInput(4);
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
