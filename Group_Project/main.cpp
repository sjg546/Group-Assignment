#include <iostream>
#include "cinema.h"


using namespace std;

int main(){
  Cinema *cina;

  cina = new Cinema();

  cout<<cina->getCinemaName();

  return 0;
}
