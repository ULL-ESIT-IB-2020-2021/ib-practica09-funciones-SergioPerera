#include <iostream>
#include <cstring>
#include "functions.h"
#include <cstdlib>
using namespace std;


int main (int argc,char *argv[]) {

  int prime_position, counter{0}, maybe_prime{2};
  bool returned_value;

  usage (argc, argv);
  string parameter {argv[1]};
  prime_position = stoi(argv[1]);

  while(counter <= maybe_prime){

    returned_value = IsPrime(maybe_prime);

   if (returned_value == 1){

      counter++;

      Mersenne(maybe_prime);

    }

    if (counter == prime_position){

      break;
      
    }

    maybe_prime++;

  }
}