#include <iostream>
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
Person *person;
person = new Person();

for(int i = 0;i<15;i++){
if(person->addTickets(1,1,1)==true){
  cout<<"AddedTicket"<<endl;
}else{
cout<<endl;
}
}
person->printReceipt();
  return 0;

}
