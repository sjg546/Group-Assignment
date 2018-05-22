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
  //Testing to see if first element is a number and clearing
  //cin memory buffer if it isnt
  while(!(cin>>a)){
    cin.clear();
    cin.ignore(999, '\n');
    cout<<"You Have Not Entered a valid Number, Try Again!\n";
  }
  //setting bounds to input so if it is higher than limit
  //it is set to the limit and if it is less than 0
  //it is set to 0
  if(a>b){
    a = b;
  }if(a<0){
    a=0;
  }
  return a;
}

int main(){
  //creating a new cinema
  Cinema *cina;
  cina = new Cinema();
  cina->setCinemaName("Big Cinema 1");
  //creating people variables
  Person *person, *tempPerson;
  person = new Person();

  //variable declaration
  int input;
  string name;
  int ticketX;
  int ticketY;
  int movieSelection = 0;
  bool running =true;
  bool runninga = true;
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
  cout<<"Note: If you get smart and try and enter a number higher than is allowed it will choose the highest possible!"<<endl;

  /*
  Enter name    from person clSS
  Enter Age     from person class

  */
  cout<<"Please Enter Your Name"<<endl;

  cin>>name;

  person->setName(name);

  cout<<"Hi "<<person->getName()<<endl;

  cout<<"Press 0 to Book Tickets or 1 to View Cinema Layout"<<endl;

  //input variable
  input = parseInput(1);
  if(input == 1){
    cina->printSeatLayout();
  }
while(runninga == true){
  cout<<cina->getCinemaName()<<" has the movies\n\n";
  cina->printMovies();
  cout<<"\nEnter the number to the left of the movie to select\n";

  input = parseInput(2);
  movieSelection = input;
  tempMovie = cina->getMovie(input);
  tempMovie.setMovieID(input);
  int tempMovieID = tempMovie.getMovieID();
  cout<< "You have selected "<<tempMovie.getMovieName()<<endl;


    while(running == true){
    cout<<"Press 0 to see a diagram of whats been booked or 1 to book tickets"<<endl;
    input = parseInput(1);
    if(input ==0){
      tempMovie.printMovieSeats();
    }
    cout<<"Enter Seat You Would Like To Book"<<endl;
    cout<<"Enter Row Number Between 0 and 9: ";
    ticketX = parseInput(9);
    cout<<"Enter Seat Number Between 0 and 29: ";
    ticketY = parseInput(29);
    //check to see if the ticket is booked then adds it to
    //the person ticket array and the movie booked seats array
    if(tempMovie.isTicketBooked(ticketX,ticketY)==false){
      if(person->addTickets(ticketX,ticketY,tempMovieID) == true){
        tempMovie.bookTicket(ticketX,ticketY);
        }
      }else{
        cout<<"Sorry that Ticket has already been Booked!!! \n\n";
      }

    cout<<"Would You Like to Book another Ticket? \nPress 1 to book another Ticket    2 To Print Booked Tickets     3 to Exit"<<endl;
    input = parseInput(3);
    if(input == 2){
      tempMovie.printMovieNumbers();
      cout<<"Would You Like to Book another Ticket? Enter 0 for yes or any other number for no"<<endl;
      input = parseInput(1);
      if(input!= 0){
        running =false;
      }
    }
    if(input ==3){
      running =false;
    }
  }
  running = true;
  cout<< "Would you like to book more tickets? Press 0 for yes and 1 for no"<<endl;
  input = parseInput(1);
  if(input == 1){
    runninga = false;
    running = false;
    cout<<"False"<<endl;
    }
    cina->updateMovie(movieSelection,tempMovie);
}
  person->printReceipt();
  return 0;
}
