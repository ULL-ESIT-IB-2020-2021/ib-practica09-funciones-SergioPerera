#include <iostream>
#include <cstring>
#include "functions.h"
#include <cstdlib>
using namespace std;


int main (int argc,char *argv[]) {

    cout << "Este programa solicita un número natural y devuelve la sucesión de mersenne de los n primeros números" << endl;

  int prime_position, counter{0}, maybe_prime{2}, par{0}, impar{};
  bool returned_value;

  usage (argc, argv);
  string parameter {argv[1]};
  prime_position = stoi(argv[1]);

  while(counter <= maybe_prime){

    returned_value = IsPrime(maybe_prime);

   if (returned_value == 1){

      if(IsPrime(Mersenne(maybe_prime)) == true){

        counter++;

        std::cout << Mersenne(maybe_prime) << std::endl;

      }

    }

    if (counter == prime_position){

      break;

    }

    maybe_prime++;

  }

 }
